#!/usr/bin/env bash

let $# || { echo No application name supplied; exit 1; }  # Exit if no arguments!
ls
cd $1
cd build
cmake ..
make

killall cutelyst3-qt5 || echo "Process was not running."

exit 0
