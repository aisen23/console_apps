#!/bin/bash

echo "Removing the build folder"
SCRIPT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null 2>&1 && pwd )"
echo ${SCRIPT_DIR}
cd ${SCRIPT_DIR}
cd ..

if [[ ! -d "build" ]]; then
   mkdir build
fi

cd build

if [[ -d "linux" ]]; then
    rm -rf linux
fi

mkdir linux
cd linux

echo "Generating linux project:"
cmake "../.."