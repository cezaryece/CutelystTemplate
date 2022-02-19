#!/usr/bin/env bash

let $# || { echo No application name supplied; exit 1; }  # Exit if no arguments!

killall cutelyst3-qt5 || echo "Process was not running."

cutelyst3-qt5  -r --server --app-file src/lib$1

exit 0
