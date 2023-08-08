
#!/bin/bash


make clean && make mrproper

export PLATFORM_VERSION=12
export ARCH=arm64

make ARCH=arm64 physwizz_defconfig
make ARCH=arm64 -j64


