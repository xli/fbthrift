# Use the official Ubuntu 22.04 image as the base
FROM ubuntu:22.04

# Set the working directory in the container to /app
WORKDIR /app

# Update the package index
RUN apt update -y

# Install dependencies
RUN apt install -y python3.10
RUN apt install -y python3-pip
RUN apt install -y build-essential
RUN apt install -y gcc
RUN apt install -y make
RUN apt install -y cmake
RUN apt install -y libssl-dev
RUN apt install -y openssl
RUN apt install -y libdwarf-dev
RUN apt install -y libevent-dev
RUN apt install -y zlib1g-dev
RUN apt install -y liblz4-dev
RUN apt install -y libsnappy-dev
RUN apt install -y libzstd-dev
RUN apt install -y autoconf
RUN apt install -y automake
RUN apt install -y libtool
RUN apt install -y libdouble-conversion-dev
RUN apt install -y libdwarf-dev
RUN apt install -y libevent-dev
RUN apt install -y liblz4-dev
RUN apt install -y libsnappy-dev
RUN apt install -y libsodium-dev
RUN apt install -y libxxhash-dev
RUN apt install -y ninja-build
RUN apt install -y xxhash
RUN apt install -y zstd
RUN apt install -y libiberty-dev
RUN apt install -y libunwind-dev
RUN apt install -y xz-utils
RUN apt install -y git
RUN apt install -y curl
RUN apt install -y patchelf
RUN apt install -y libgflags-dev
RUN apt install -y libgtest-dev
RUN apt install -y libboost-all-dev
RUN apt install -y libgoogle-glog-dev
RUN apt install -y libaio-dev

# Install Rust
RUN curl https://sh.rustup.rs -sSf | bash -s -- -y
ENV PATH="/root/.cargo/bin:${PATH}"
RUN rustc --version

# Install Emacs
RUN apt install -y emacs-nox

# Clone the fbthrift Git project
RUN git clone https://github.com/xli/fbthrift.git

# Change into the cloned repository
WORKDIR /app/fbthrift

# Make port 80 available to the world outside this container
EXPOSE 80

# Define environment variable
ENV Hello=World

# Run bash when the container launches
CMD ["bash"]