
INSTALL_DIR=/usr/local
PYTHON_INSTALL_DIR=/usr/local
PYTHON_INCLUDE_DIR=/usr/include/python3.10/
PYTHON_LIBRARY=/usr/lib/aarch64-linux-gnu/libpython3.10.so
PY_CMAKE="PYTHON_PACKAGE_INSTALL_DIR": "$(PYTHON_INSTALL_DIR)", "PYTHON_INCLUDE_DIR": "$(PYTHON_INCLUDE_DIR)", "PYTHON_LIBRARY": "$(PYTHON_LIBRARY)", "PYTHON_LIBRARIES": "$(PYTHON_LIBRARY)", "PYTHON_EXTENSIONS": "ON", "thriftpy3": "ON"
CMAKE_C_FLAGS=
CMAKE_CXX_FLAGS=-std=gnu++20 -D_GLIBCXX_USE_CXX11_ABI=0 -fcoroutines -I$(PYTHON_INCLUDE_DIR)
CMAKE_DEFINES='{$(PY_CMAKE), "CMAKE_POSITION_INDEPENDENT_CODE": "ON", "CMAKE_CXX_FLAGS": "$(CMAKE_CXX_FLAGS)"}'

.PHONY: env install build dock jmtest

env:
	pip install --upgrade pip
	pip install setuptools
	pip install setuptools_rust
	pip install Cython==3.0.11


install:
	make build target=boost
	make build target=fmt
	make build target=fast_float
	make build target=folly
	make build target=fizz
	make build target=wangle
	make build target=mvfst
	make build target=fbthrift


build: target=fbthrift
build:
	./build/fbcode_builder/getdeps.py \
		--allow-system-packages \
		build $(target) \
		--extra-cmake-defines $(CMAKE_DEFINES) \
		--extra-b2-args "cxxflags=-fPIC" --extra-b2-args "cflags=-fPIC" \
		--install-dir $(INSTALL_DIR) \
		--no-test --clean --no-deps \
		2>&1 | tee build_$(target).log

dock:
	docker build --no-cache -t fbthrift-image .
	docker run -it fbthrift-image


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
