#!/bin/bash
wget -P /tmp https://github.com/Hmidani/alx-low_level_programming/blob/b19979f994d2a5d138d7bb6cb6ee0eaa6d5068d0/0x18-dynamic_libraries/nnumber.so
export LD_PRELOAD=/tmp/nnumber.so
