#!/bin/bash
wget -P /tmp https://github.com/Maryam-Ketatni-004/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libgiga.so
export LD_PRELEAD=/tmp/libgiga.so
