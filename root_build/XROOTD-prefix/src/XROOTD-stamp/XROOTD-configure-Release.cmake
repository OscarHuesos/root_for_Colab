

set(command "/usr/local/lib/python2.7/dist-packages/cmake/data/bin/cmake;-DCMAKE_INSTALL_PREFIX:PATH=/content/root_src/root_build;-DCMAKE_C_COMPILER=/usr/bin/cc;-DCMAKE_C_FLAGS= -Wno-implicit-fallthrough -pipe -Wall -W -pthread;-DCMAKE_CXX_COMPILER=/usr/bin/c++;-DCMAKE_CXX_FLAGS= -std=c++11 -Wno-implicit-fallthrough -Wno-noexcept-type -pipe    -fsigned-char -pthread -w;-DCMAKE_OSX_SYSROOT=;-DCMAKE_OSX_DEPLOYMENT_TARGET=;-DENABLE_PYTHON=OFF;-DENABLE_CEPH=OFF;-DCMAKE_INSTALL_RPATH:STRING=/content/root_src/root_build/lib;-GUnix Makefiles;/content/root_src/root_build/XROOTD-prefix/src/XROOTD")
execute_process(
  COMMAND ${command}
  RESULT_VARIABLE result
  OUTPUT_FILE "/content/root_src/root_build/XROOTD-prefix/src/XROOTD-stamp/XROOTD-configure-out.log"
  ERROR_FILE "/content/root_src/root_build/XROOTD-prefix/src/XROOTD-stamp/XROOTD-configure-err.log"
  )
if(result)
  set(msg "Command failed: ${result}\n")
  foreach(arg IN LISTS command)
    set(msg "${msg} '${arg}'")
  endforeach()
  set(msg "${msg}\nSee also\n  /content/root_src/root_build/XROOTD-prefix/src/XROOTD-stamp/XROOTD-configure-*.log")
  message(FATAL_ERROR "${msg}")
else()
  set(msg "XROOTD configure command succeeded.  See also /content/root_src/root_build/XROOTD-prefix/src/XROOTD-stamp/XROOTD-configure-*.log")
  message(STATUS "${msg}")
endif()
