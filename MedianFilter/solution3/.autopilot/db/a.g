#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/kinka1/HLS/MedianFilter/solution3/.autopilot/db/a.g.bc ${1+"$@"}
