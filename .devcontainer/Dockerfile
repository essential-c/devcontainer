FROM ubuntu:26.04

ARG DEBIAN_FRONTEND=noninteractive

RUN apt-get update && apt-get install -y build-essential valgrind python3 \
    vim bash-completion git gdb python3-pip clang afl++

RUN git clone https://github.com/essential-c/check50.git /tmp/check50
RUN cd /tmp/check50 && pip install . --break-system-packages --root-user-action=ignore

RUN mkdir /root/workspace

# TODO more folders
COPY devcontainer/01-intro /root/workspace/01-intro
COPY devcontainer/02-basics /root/workspace/02-basics
COPY devcontainer/03-mm-libc /root/workspace/03-mm-libc
COPY devcontainer/06-security /root/workspace/06-security

WORKDIR /root/workspace
