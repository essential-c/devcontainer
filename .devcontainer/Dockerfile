FROM ubuntu:24.04

ARG DEBIAN_FRONTEND=noninteractive

RUN apt-get update && apt-get install -y build-essential valgrind python3 \
    vim bash-completion git gdb python3-pip clang afl++

RUN pip3 install --root-user-action=ignore --break-system-packages check50==3.4.0

RUN mkdir /root/workspace
WORKDIR /root/workspace

