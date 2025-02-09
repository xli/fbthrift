# Use the official Ubuntu 22.04 image as the base
FROM ubuntu:22.04

# Set the working directory in the container to /app
WORKDIR /app

# Update the package index
RUN apt update -y

# Install dependencies
RUN apt install -y \
    python3.10 \
    python3-pip \
    build-essential \
    gcc \
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
    libboost-all-dev \
    libgoogle-glog-dev \
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
RUN make env


# Make port 80 available to the world outside this container
EXPOSE 80

# Define environment variable
ENV Hello=World

# Run bash when the container launches
CMD ["bash"]