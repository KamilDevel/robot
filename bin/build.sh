#/bin/bash

rm -rf ../build
mkdir ../build
cd ../build

cmake .. -DCMAKE_CC_COMPILER=/usr/bin/arm-linux-gnueabi-gcc -DCMAKE_CXX_COMPILER=/usr/bin/arm-linux-gnueabi-g++ -DCMAKE_C_COMPILER=/usr/bin/arm-linux-gnueabi-gcc

make

arm-linux-gnueabi-strip /src/build/Robot

sshpass -p "maker" scp /src/build/Robot robot@192.168.0.87:.
