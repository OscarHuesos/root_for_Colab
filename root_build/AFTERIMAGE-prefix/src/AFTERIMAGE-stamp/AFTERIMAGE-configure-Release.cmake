

set(command "./configure;--prefix;/content/root_src/root_build;--libdir=/content/root_src/root_build/lib;--with-ttf;--with-afterbase=no;--without-svg;--disable-glx;--with-builtin-ungif;--with-jpeg;--with-jpeg-includes=/usr/include;--with-png;--with-png-includes=/usr/include;--with-tiff-includes=/usr/include/x86_64-linux-gnu;CC=/usr/bin/cc;CFLAGS=")
execute_process(
  COMMAND ${command}
  RESULT_VARIABLE result
  OUTPUT_FILE "/content/root_src/root_build/AFTERIMAGE-prefix/src/AFTERIMAGE-stamp/AFTERIMAGE-configure-out.log"
  ERROR_FILE "/content/root_src/root_build/AFTERIMAGE-prefix/src/AFTERIMAGE-stamp/AFTERIMAGE-configure-err.log"
  )
if(result)
  set(msg "Command failed: ${result}\n")
  foreach(arg IN LISTS command)
    set(msg "${msg} '${arg}'")
  endforeach()
  set(msg "${msg}\nSee also\n  /content/root_src/root_build/AFTERIMAGE-prefix/src/AFTERIMAGE-stamp/AFTERIMAGE-configure-*.log")
  message(FATAL_ERROR "${msg}")
else()
  set(msg "AFTERIMAGE configure command succeeded.  See also /content/root_src/root_build/AFTERIMAGE-prefix/src/AFTERIMAGE-stamp/AFTERIMAGE-configure-*.log")
  message(STATUS "${msg}")
endif()
