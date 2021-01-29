

set(command "/usr/local/lib/python2.7/dist-packages/cmake/data/bin/cmake;-DSSE=OFF;-DCMAKE_BUILD_TYPE=Release;-DCMAKE_C_COMPILER=/usr/bin/cc;-DCMAKE_CXX_COMPILER=/usr/bin/c++;-DCMAKE_C_FLAGS= -Wno-implicit-fallthrough -pipe -Wall -W -pthread;-DCMAKE_CXX_FLAGS= -std=c++11 -Wno-implicit-fallthrough -Wno-noexcept-type -pipe  -Wshadow -Wall -W -Woverloaded-virtual -fsigned-char -pthread;-DCMAKE_INSTALL_PREFIX=/content/root_src/root_build;-GUnix Makefiles;/content/root_src/root_build/VDT-prefix/src/VDT")
execute_process(
  COMMAND ${command}
  RESULT_VARIABLE result
  OUTPUT_FILE "/content/root_src/root_build/VDT-prefix/src/VDT-stamp/VDT-configure-out.log"
  ERROR_FILE "/content/root_src/root_build/VDT-prefix/src/VDT-stamp/VDT-configure-err.log"
  )
if(result)
  set(msg "Command failed: ${result}\n")
  foreach(arg IN LISTS command)
    set(msg "${msg} '${arg}'")
  endforeach()
  set(msg "${msg}\nSee also\n  /content/root_src/root_build/VDT-prefix/src/VDT-stamp/VDT-configure-*.log")
  message(FATAL_ERROR "${msg}")
else()
  set(msg "VDT configure command succeeded.  See also /content/root_src/root_build/VDT-prefix/src/VDT-stamp/VDT-configure-*.log")
  message(STATUS "${msg}")
endif()
