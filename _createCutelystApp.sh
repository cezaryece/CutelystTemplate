#!/usr/bin/env bash

let $# || { echo No application name supplied; exit 1; }  # Exit if no arguments!

cutelyst3-qt5 --create-app $1
cd $1
cutelyst3-qt5 --controller ApiV1
cd ..
./cleanAndBuildApp.sh $1

exit 0
