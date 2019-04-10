#!/bin/bash
make clean
export ANDROID_NDK=/home/user/Programming/android-ndk-r17b
PATH=$ANDROID_NDK/toolchains/x86_64-4.9/prebuilt/linux-x86_64/bin:$PATH
#./Configure android-x86_64 -D__ANDROID_API__=28
make
cp libcrypto.a ../../build/x86_64/libcrypto.a
cp libcrypto.so ../../build/x86_64/libcrypto.so
cp libssl.a ../../build/x86_64/libssl.a
cp libssl.so ../../build/x86_64/libssl.so