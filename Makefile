
PYTHON_INSTALL_DIR=/usr/local/lib/python3.10/dist-packages
PYTHON_INCLUDE_DIR=/usr/include/python3.10/
PYTHON_LIIBRARY=/usr/lib/aarch64-linux-gnu/libpython3.10.so
PY_CMAKE="PYTHON_PACKAGE_INSTALL_DIR": "$(PYTHON_INSTALL_DIR)", "PYTHON_INCLUDE_DIR": "$(PYTHON_INCLUDE_DIR)", "PYTHON_LIBRARY": "$(PYTHON_LIBRARY)", "PYTHON_EXTENSIONS": "ON", "thriftpy3": "ON"
CMAKE_C_FLAGS=
CMAKE_CXX_FLAGS=-std=gnu++20 $(CMAKE_C_FLAGS)

.PHONY: env build

env:
	pip install --upgrade pip
	pip install setuptools
	pip install setuptools_rust
	pip install Cython=3.0.11

build: target=fbthrift
build:
	./build/opensource/fbcode_builder/getdeps.py \
		build $(target) \
		--extra-cmake-defines '{$(PY_CMAKE), "BUILD_SHARED_LIBS": "ON", "CMAKE_POSITION_INDEPENDENT_CODE": "ON", "CMAKE_CXX_STANDARD": "20", "CMAKE_CXX_FLAGS": "$(CMAKE_CXX_FLAGS)", "CMAKE_C_FLAGS": "$(CMAKE_C_FLAGS)"}' \
		--extra-b2-args "cxxflags=-fPIC" --extra-b2-args "cflags=-fPIC" \
		--install-dir /usr/local \
		--verbose --shared-libs --no-test --clean | tee build_$(target).log
