#! /bin/bash
# refer 
# - https://blog.csdn.net/happyeveryday62/article/details/107673477
# - https://blog.csdn.net/qq_38308388/article/details/127574517

# find source link at https://www.gnu.org/prep/ftp.html
DOWNLOAD_ROOT="$HOME/Downloads"
PROGRAM_ROOT="$HOME//ProgramFiles"
GCC_VERSION="gcc-13.1.0"
GCC_URL="https://mirrors.aliyun.com/gnu/gcc/$GCC_VERSION/$GCC_VERSION.tar.gz"

cd $DOWNLOAD_ROOT
wget $GCC_URL
tar -zxvf $GCC_VERSION.tar.gz
cd "$DOWNLOAD_ROOT/$GCC_VERSION"
./contrib/download_prerequisites
./configure --prefix="$PROGRAM_ROOT/$GCC_VERSION"  --disable-multilib --enable-checking=release --enable-languages=c,c++
make -j6
make install
