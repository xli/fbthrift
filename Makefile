BUILD_SHARE="BUILD_SHARED_LIBS": "ON"
INSTALL_DIR=/usr/local
PYTHON_INSTALL_DIR=/usr/local
PYTHON_INCLUDE_DIR=/usr/include/python3.10/
PYTHON_LIBRARY=/usr/lib/aarch64-linux-gnu/libpython3.10.so
PY_CMAKE="PYTHON_PACKAGE_INSTALL_DIR": "$(PYTHON_INSTALL_DIR)", "PYTHON_INCLUDE_DIR": "$(PYTHON_INCLUDE_DIR)", "PYTHON_LIBRARY": "$(PYTHON_LIBRARY)", "PYTHON_LIBRARIES": "$(PYTHON_LIBRARY)", "PYTHON_EXTENSIONS": "ON", "thriftpy3": "ON"
CMAKE_C_FLAGS=
CMAKE_CXX_FLAGS=-std=gnu++20 -O2 -D_GLIBCXX_USE_CXX11_ABI=0 -fcoroutines -I$(PYTHON_INCLUDE_DIR)
CMAKE_DEFINES='{$(PY_CMAKE), "CMAKE_POSITION_INDEPENDENT_CODE": "ON", "CMAKE_CXX_FLAGS": "$(CMAKE_CXX_FLAGS)", $(BUILD_SHARE)}'
FOLLY_PYTHON_CXX_FLAGS=$(CMAKE_CXX_FLAGS)

.PHONY: env install build dock jmtest jmtest-server jmtest-client

env:
	pip install --upgrade pip
	pip install setuptools
	pip install setuptools_rust
	pip install Cython==3.0.11


install:
	make build target=googletest
	make build target=gflags
	make build target=boost
	make build target=fmt
	make build target=glog
	make build target=fast_float
	FOLLY_PYTHON_CXX_FLAGS="$(FOLLY_PYTHON_CXX_FLAGS)" make build target=folly
	make build target=fizz
	make build target=wangle
	make build target=mvfst
	FOLLY_PYTHON_CXX_FLAGS="$(FOLLY_PYTHON_CXX_FLAGS)" make build target=fbthrift


build: target=fbthrift
build:
	./build/fbcode_builder/getdeps.py \
		--allow-system-packages \
		build $(target) \
		--extra-cmake-defines $(CMAKE_DEFINES) \
		--extra-b2-args "cxxflags=-fPIC" --extra-b2-args "cflags=-fPIC" \
		--install-dir $(INSTALL_DIR) \
		--no-test --clean --no-deps  --shared-libs --verbose \
		2>&1 | tee /var/log/build_$(target).log

dock:
	docker build --no-cache -t fbthrift-shared-image .
	docker run -it fbthrift-shared-image


jmtest:
	cmake jmtest/thrift-py -DCMAKE_INSTALL_PREFIX=$(INSTALL_DIR) \
		-DPYTHON_PACKAGE_INSTALL_DIR=$(INSTALL_DIR) \
		-DCMAKE_CXX_FLAGS="$(CMAKE_CXX_FLAGS)" \
		-DCMAKE_POSITION_INDEPENDENT_CODE=ON \
		-DCMAKE_CXX_STANDARD=20 \
		-DBoost_COMPILER=vc142 \
		-G Ninja
	ninja install

jmtest-server:
	python3 jmtest/server/server.py


jmtest-client:
	c++ -Wall -O2 -g $(CMAKE_CXX_FLAGS) -I. \
		-lthrift_python_cpp -lthriftcpp2 -lthriftmetadata -lthriftanyrep -lthrifttype -lthrifttyperep -lthriftprotocol -lthrift-core -lfolly_python_cpp -lasync -lconcurrency -lrpcmetadata -lruntime -ltransport -lfolly -lsnappy -levent -ldouble-conversion -llz4 -lzstd -llzma -lglog -lcrypto -lfmt -liberty -lboost_context -lunwind \
		-ljmswen_add_cpp2 \
		-o jmtest_client jmtest/thrift-py/client/TestClient.cpp
