# Use the official Ubuntu 22.04 image as the base
FROM ubuntu:22.04

# Set the working directory in the container to /app
WORKDIR /app

# Update the package index
RUN apt update -y

RUN apt-get install -y --no-install-recommends \
    build-essential \
    libc6-dev \
    zlib1g-dev \
    libncurses5-dev

# Install Clang and Clang++
RUN apt-get install -y --no-install-recommends \
    clang \
    libc++-dev \
    libc++abi-dev
# Set environment variables
ENV CC=clang
ENV CXX=clang++
# Verify the installation
RUN clang --version
RUN clang++ --version

# Install dependencies
RUN apt install -y \
    python3.10 \
    python3-pip \
    make \
    cmake \
    libssl-dev \
    openssl \
    libdwarf-dev \
    libevent-dev \
    zlib1g-dev \
    liblz4-dev \
    libsnappy-dev \
    libzstd-dev \
    autoconf \
    automake \
    libtool \
    libdouble-conversion-dev \
    libsodium-dev \
    libxxhash-dev \
    ninja-build \
    xxhash \
    zstd \
    libiberty-dev \
    libunwind-dev \
    xz-utils \
    git \
    curl \
    patchelf \
    libgflags-dev \
    libgtest-dev \
    libgoogle-glog-dev \
    libbz2-dev \
    libaio-dev

RUN ln -s /usr/bin/python3 /usr/bin/python

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

# Install
RUN make env install


# Make port 80 available to the world outside this container
EXPOSE 80

# Define environment variable
ENV LD_LIBRARY_PATH=/usr/local/lib

# Run bash when the container launches
CMD ["bash"]