#!/bin/sh
rm -f CMakeCache.txt
/usr/local/lib/python2.7/dist-packages/cmake/data/bin/cmake  -DCMAKE_INSTALL_PREFIX="/content/root_src/root_install" -DPYTHON_EXECUTABLE="/usr/bin/python3.6" -DPython3_EXECUTABLE="/usr/bin/python3.6" /content/root_src 
