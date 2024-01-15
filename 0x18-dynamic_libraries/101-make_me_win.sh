#!/bin/bash
cp 101-make_me_win.so /tmp/
LD_PRELOAD=/tmp/101-make_me_win.so ./path/to/gm 9 8 10 24 75 9
