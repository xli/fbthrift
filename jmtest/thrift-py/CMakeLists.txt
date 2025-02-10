# (c) Meta Platforms, Inc. and affiliates. Confidential and proprietary.

cmake_minimum_required(VERSION 3.12 FATAL_ERROR)

project(jmswen_add_cpp2)

set(CMAKE_MODULE_PATH
  ${CMAKE_CURRENT_SOURCE_DIR}/cmake
  ${CMAKE_CURRENT_SOURCE_DIR}/../../build/fbcode_builder/CMake
  ${CMAKE_MODULE_PATH}
)

find_package(fmt CONFIG REQUIRED)
find_package(gflags CONFIG REQUIRED)
find_package(Folly CONFIG REQUIRED)
find_package(Libsodium)  # No config
find_package(fizz CONFIG REQUIRED)
find_package(wangle CONFIG REQUIRED)
find_package(FBThrift CONFIG REQUIRED)

#######################
# Run Thrift compiler
#######################
add_custom_command(
  OUTPUT
    ${CMAKE_BINARY_DIR}/gen-cpp2/add_types.cpp
    ${CMAKE_BINARY_DIR}/gen-cpp2/AddService_processmap_binary.cpp
    ${CMAKE_BINARY_DIR}/gen-cpp2/AddService_processmap_compact.cpp
    ${CMAKE_BINARY_DIR}/gen-cpp2/add_constants.cpp
    ${CMAKE_BINARY_DIR}/gen-cpp2/add_data.cpp
    ${CMAKE_BINARY_DIR}/gen-cpp2/add_metadata.cpp
    ${CMAKE_BINARY_DIR}/gen-cpp2/AddService.cpp
    ${CMAKE_BINARY_DIR}/gen-cpp2/AddServiceAsyncClient.cpp
  DEPENDS
    ${CMAKE_CURRENT_SOURCE_DIR}/add.thrift
  COMMAND
    ${FBTHRIFT_COMPILER} --gen mstch_cpp2:include_prefix=${CMAKE_BINARY_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/add.thrift
  COMMAND
    ${FBTHRIFT_COMPILER} --gen mstch_py3:include_prefix=${CMAKE_BINARY_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/add.thrift
  COMMAND
    ${FBTHRIFT_COMPILER} --gen mstch_python:include_prefix=${CMAKE_BINARY_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/add.thrift
  COMMAND
    # Putting all gen-python/ files in the gen-py3/ directory makes setup.py logic straightforward
    ${CMAKE_COMMAND} -E copy_directory gen-python/ gen-py3/
  COMMAND
    # Ideally Thrift compiler would handle this (it already generates jmswen/__init__.py).
    ${CMAKE_COMMAND} -E touch ${CMAKE_BINARY_DIR}/gen-py3/jmswen/add/__init__.py
  COMMENT
    "Running Thrift compiler on add.thrift"
)
add_custom_target(
  thrift_generated_files
  DEPENDS
    ${CMAKE_BINARY_DIR}/gen-cpp2/add_constants.cpp
    ${CMAKE_BINARY_DIR}/gen-cpp2/add_data.cpp
    ${CMAKE_BINARY_DIR}/gen-cpp2/add_metadata.cpp
    ${CMAKE_BINARY_DIR}/gen-cpp2/add_types.cpp
    ${CMAKE_BINARY_DIR}/gen-cpp2/AddService_processmap_binary.cpp
    ${CMAKE_BINARY_DIR}/gen-cpp2/AddService_processmap_compact.cpp
    ${CMAKE_BINARY_DIR}/gen-cpp2/AddService.cpp
    ${CMAKE_BINARY_DIR}/gen-cpp2/AddServiceAsyncClient.cpp
)

#######################
# Build and install the gen-cpp2 library
#######################
add_library(
    jmswen_add_cpp2

    ${CMAKE_BINARY_DIR}/gen-cpp2/add_types.cpp
    ${CMAKE_BINARY_DIR}/gen-cpp2/AddService_processmap_binary.cpp
    ${CMAKE_BINARY_DIR}/gen-cpp2/AddService_processmap_compact.cpp
    ${CMAKE_BINARY_DIR}/gen-cpp2/add_constants.cpp
    ${CMAKE_BINARY_DIR}/gen-cpp2/add_data.cpp
    ${CMAKE_BINARY_DIR}/gen-cpp2/add_metadata.cpp
    ${CMAKE_BINARY_DIR}/gen-cpp2/AddService.cpp
    ${CMAKE_BINARY_DIR}/gen-cpp2/AddServiceAsyncClient.cpp
)
add_dependencies(jmswen_add_cpp2 thrift_generated_files)
target_link_libraries(
  jmswen_add_cpp2
  PUBLIC
    fmt::fmt
    Folly::folly
    FBThrift::thriftcpp2
    FBThrift::thriftprotocol
)
install(TARGETS jmswen_add_cpp2)

#######################
# Build and install thrift-py3 bindings
#######################
add_custom_target(
  thrift_python_and_py3_bindings ALL
  DEPENDS
    jmswen_add_cpp2
)

set(incs ".")
set(libs ${CMAKE_BINARY_DIR})

# Build cython extensions and install thrift-py3 and thrift-python packages
add_custom_command(TARGET thrift_python_and_py3_bindings
  COMMAND ${CMAKE_COMMAND} -E env
    "CXX=${CMAKE_CXX_COMPILER}"
    "LDSHARED=${CMAKE_CXX_COMPILER} -shared"
    python3 ${CMAKE_CURRENT_SOURCE_DIR}/setup.py
    build_ext -f "$<$<BOOL:${incs}>:-I$<JOIN:${incs},:>>" "$<$<BOOL:${libs}>:-L$<JOIN:${libs},:>>"
  COMMAND
    python3 ${CMAKE_CURRENT_SOURCE_DIR}/setup.py install
  WORKING_DIRECTORY
    ${CMAKE_BINARY_DIR}/gen-py3
)
