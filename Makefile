
PYTHON_INSTALL_DIR=/usr/local/lib/python3.10/dist-packages
PYTHON_INCLUDE_DIR=/usr/include/python3.10/
PYTHON_LIIBRARY=/usr/lib/aarch64-linux-gnu/libpython3.10.so
PY_CMAKE="PYTHON_PACKAGE_INSTALL_DIR": "$(PYTHON_INSTALL_DIR)", "PYTHON_INCLUDE_DIR": "$(PYTHON_INCLUDE_DIR)", "PYTHON_LIBRARY": "$(PYTHON_LIBRARY)", "PYTHON_EXTENSIONS": "ON", "thriftpy3": "ON"
CMAKE_C_FLAGS=
CMAKE_CXX_FLAGS=-std=gnu++20 -D_GLIBCXX_USE_CXX11_ABI=0 -fcoroutines
INSTALL_DIR=/usr/local

.PHONY: env install build

env:
	pip install --upgrade pip
	pip install setuptools
	pip install setuptools_rust
	pip install Cython=3.0.11


install:
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
		--allow-system-packages build $(target) \
		--extra-cmake-defines '{"CMAKE_POSITION_INDEPENDENT_CODE": "ON", "PYTHON_EXTENSIONS": "ON", "thriftpy3": "ON", "CMAKE_CXX_FLAGS": "$(CMAKE_CXX_FLAGS)"}' \
		--install-dir $(INSTALL_DIR) \
		--no-test --clean --no-deps
