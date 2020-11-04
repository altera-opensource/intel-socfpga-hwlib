#!/bin/bash -ex

set -e
set +x

INSTALL_DIR=$PWD

echo "Starting Linaro toolchain installation"
echo "==="
echo "Please install SoCEDS command shell in the folder <SOCEDS>/embedded/cygwin_setup"
echo "If you do not have internet connection, you can download the files from"
echo "http://releases.linaro.org/components/toolchain/binaries/7.5-2019.12/arm-eabi/gcc-linaro-7.5.0-2019.12-i686_arm-eabi.tar.xz"
echo "or http://releases.linaro.org/components/toolchain/binaries/7.5-2019.12/arm-eabi/gcc-linaro-7.5.0-2019.12-i686-mingw32_arm-eabi.tar.xz if you're on Windows"
echo "and place it in this folder"
echo "You will also need to git clone http://sourceware.org/git/newlib-cygwin.git, and checkout cygwin-3_1_0-release in this folder"
echo "before running this script"
echo ""
echo "If you have internet connection and your machine is behind proxy, please run 'export http_proxy=<your_proxy>'"
echo "and 'export http_proxy=<your_proxy>' before running this script"
echo ""
echo "If you're running this script in Windows, please run it from MSYS shell. If you do not have MSYS or MinGW installed"
echo "you can download it and install it from http://www.mingw.org/wiki/Getting_Started"
echo "The packages you'll need to install are: mingw-developer-toolkit-bin mingw32-base-bin msys-base-bin msys-wget-bin"
echo "To start a MSYS shell, press the \"Start\" button, and type \"MSYS\", right click, and press \"Open file location\""
echo "Then right click on the \"MSYS2 MSYS\" and press \"Run as administrator\""
echo ""

sleep 1

set -x

pushd $INSTALL_DIR

if [ x$OS == "xWindows_NT" ]
then
	GCCFILE=gcc-linaro-7.5.0-2019.12-i686-mingw32_arm-eabi
else
	GCCFILE=gcc-linaro-7.5.0-2019.12-i686_arm-eabi
fi

if [ -f ${GCCFILE}.tar.xz ]
then
	echo Linaro toolchain tarball found, skipping download
else
	wget http://releases.linaro.org/components/toolchain/binaries/7.5-2019.12/arm-eabi/${GCCFILE}.tar.xz -O ${GCCFILE}.tar.xz
fi
rm -rf $INSTALL_DIR/$GCCFILE
tar xvf ${GCCFILE}.tar.xz -C $INSTALL_DIR/
rm -rf gcc
mv $GCCFILE gcc

export PATH=$PATH:$PWD/../cygwin/bin
export PATH=$PATH:$PWD/gcc/bin

if [ -d newlib-cygwin ]
then
	echo Newlib directory found, skip cloning
else
	git clone http://sourceware.org/git/newlib-cygwin.git 
	pushd newlib-cygwin
	git checkout cygwin-3_1_0-release
	popd
fi

pushd newlib-cygwin
rm -rf build
mkdir build
cd build
../configure --target=arm-eabi --disable-newlib-supplied-syscalls --disable-multilib
make all -j16
make install DESTDIR=$INSTALL_DIR/newlib
popd
