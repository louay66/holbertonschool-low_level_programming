#!/bin/bash
wget -p /tmp https://github.com/louay66/holbertonschool-low_level_programming.git/raw/main/0x18-dynamic_libraries/libdynamic.so
export LD_PRELOAD=/tmp/libdynamic.so
