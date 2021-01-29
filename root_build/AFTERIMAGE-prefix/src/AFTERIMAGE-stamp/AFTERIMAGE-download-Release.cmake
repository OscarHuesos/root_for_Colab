

set(command "/usr/local/lib/python2.7/dist-packages/cmake/data/bin/cmake;-E;copy_directory;/content/root_src/graf2d/asimage/src/libAfterImage;AFTERIMAGE")
execute_process(
  COMMAND ${command}
  RESULT_VARIABLE result
  OUTPUT_FILE "/content/root_src/root_build/AFTERIMAGE-prefix/src/AFTERIMAGE-stamp/AFTERIMAGE-download-out.log"
  ERROR_FILE "/content/root_src/root_build/AFTERIMAGE-prefix/src/AFTERIMAGE-stamp/AFTERIMAGE-download-err.log"
  )
if(result)
  set(msg "Command failed: ${result}\n")
  foreach(arg IN LISTS command)
    set(msg "${msg} '${arg}'")
  endforeach()
  set(msg "${msg}\nSee also\n  /content/root_src/root_build/AFTERIMAGE-prefix/src/AFTERIMAGE-stamp/AFTERIMAGE-download-*.log")
  message(FATAL_ERROR "${msg}")
else()
  set(msg "AFTERIMAGE download command succeeded.  See also /content/root_src/root_build/AFTERIMAGE-prefix/src/AFTERIMAGE-stamp/AFTERIMAGE-download-*.log")
  message(STATUS "${msg}")
endif()
