# (c) Meta Platforms, Inc. and affiliates. Confidential and proprietary.

from Cython.Build import cythonize
from Cython.Compiler import Options
from setuptools import Extension, setup

Options.fast_fail = True

libs = [
    "folly",
    "folly_python_cpp",
    "glog",
    # Thrift
    "async",
    "concurrency",
    "rpcmetadata",
    "runtime",
    "thrift-core",
    "thriftcpp2",
    "thriftprotocol",
    "thrift_python_cpp",
    "transport",
    "thriftmetadata",
    # User
    "jmswen_add_cpp2",
]

common_options = {
    "language": "c++",
    "extra_compile_args": ["-std=c++20"],
}

extensions = [
    # TODO converter & metadata?
    Extension(
        "jmswen.add.types",
        sources=["jmswen/add/types.pyx"],
        libraries=libs,
        **common_options,
    ),
    Extension(
        "jmswen.add.types_fields",
        sources=["jmswen/add/types_fields.pyx"],
        libraries=libs,
        **common_options,
    ),
    Extension(
        "jmswen.add.types_empty",
        sources=["jmswen/add/types_empty.pyx"],
        libraries=libs,
        **common_options,
    ),
]

setup(
    name="jmswen_add",
    version="0.0.1",
    packages=[
        "jmswen.add",
    ],
    package_data={"": ["*.pxd", "*.h"]},
    setup_requires=["cython"],
    zip_safe=False,
    ext_modules=cythonize(extensions, compiler_directives={"language_level": 3}),
)
