

set(command "${make}")
execute_process(
  COMMAND ${command}
  RESULT_VARIABLE result
  OUTPUT_FILE "/content/root_src/root_build/AFTERIMAGE-prefix/src/AFTERIMAGE-stamp/AFTERIMAGE-build-out.log"
  ERROR_FILE "/content/root_src/root_build/AFTERIMAGE-prefix/src/AFTERIMAGE-stamp/AFTERIMAGE-build-err.log"
  )
if(result)
  set(msg "Command failed: ${result}\n")
  foreach(arg IN LISTS command)
    set(msg "${msg} '${arg}'")
  endforeach()
  set(msg "${msg}\nSee also\n  /content/root_src/root_build/AFTERIMAGE-prefix/src/AFTERIMAGE-stamp/AFTERIMAGE-build-*.log")
  message(FATAL_ERROR "${msg}")
else()
  set(msg "AFTERIMAGE build command succeeded.  See also /content/root_src/root_build/AFTERIMAGE-prefix/src/AFTERIMAGE-stamp/AFTERIMAGE-build-*.log")
  message(STATUS "${msg}")
endif()
