
PYTHON_INSTALL_DIR=/usr/local/lib/python3.10/dist-packages
PYTHON_INCLUDE_DIR=/usr/include/python3.10/
PYTHON_LIIBRARY=/usr/lib/aarch64-linux-gnu/libpython3.10.so
PY_CMAKE="PYTHON_PACKAGE_INSTALL_DIR": "$(PYTHON_INSTALL_DIR)", "PYTHON_INCLUDE_DIR": "$(PYTHON_INCLUDE_DIR)", "PYTHON_LIBRARY": "$(PYTHON_LIBRARY)", "PYTHON_EXTENSIONS": "ON", "thriftpy3": "ON"
CMAKE_C_FLAGS=
CMAKE_CXX_FLAGS=-std=gnu++20 $(CMAKE_C_FLAGS)

.PHONY: env build build_all

env:
	pip install --upgrade pip
	pip install setuptools
	pip install setuptools_rust
	pip install Cython=3.0.11


deps:
	./build/fbcode_builder/getdeps.py install-system-deps --recursive fbthrift | tee install_deps.log


BUILD_TARGETS=fmt fast_float folly fizz wangle mvfst fbthrift

build_all:
	$(foreach src, $(BUILD_TARGETS), $(eval $MAKE build taregt=$(src))

build: target=fbthrift
build:
	./build/fbcode_builder/getdeps.py --allow-system-packages build $(target) --install-dir /usr/local --no-test --clean --no-deps

build_share:
	./build/fbcode_builder/getdeps.py \
		--allow-system-packages \
		build $(target) \
		--extra-cmake-defines '{$(PY_CMAKE), "BUILD_SHARED_LIBS": "ON", "CMAKE_POSITION_INDEPENDENT_CODE": "ON", "CMAKE_CXX_STANDARD": "20", "CMAKE_CXX_FLAGS": "$(CMAKE_CXX_FLAGS)", "CMAKE_C_FLAGS": "$(CMAKE_C_FLAGS)"}' \
		--extra-b2-args "cxxflags=-fPIC" --extra-b2-args "cflags=-fPIC" \
		--install-dir /usr/local \
		--verbose --shared-libs --no-test --clean --no-deps | tee build_$(target).log
