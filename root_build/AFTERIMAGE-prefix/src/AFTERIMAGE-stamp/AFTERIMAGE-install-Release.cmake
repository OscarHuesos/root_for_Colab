

set(command "${make};install")
execute_process(
  COMMAND ${command}
  RESULT_VARIABLE result
  OUTPUT_FILE "/content/root_src/root_build/AFTERIMAGE-prefix/src/AFTERIMAGE-stamp/AFTERIMAGE-install-out.log"
  ERROR_FILE "/content/root_src/root_build/AFTERIMAGE-prefix/src/AFTERIMAGE-stamp/AFTERIMAGE-install-err.log"
  )
if(result)
  set(msg "Command failed: ${result}\n")
  foreach(arg IN LISTS command)
    set(msg "${msg} '${arg}'")
  endforeach()
  set(msg "${msg}\nSee also\n  /content/root_src/root_build/AFTERIMAGE-prefix/src/AFTERIMAGE-stamp/AFTERIMAGE-install-*.log")
  message(FATAL_ERROR "${msg}")
else()
  set(msg "AFTERIMAGE install command succeeded.  See also /content/root_src/root_build/AFTERIMAGE-prefix/src/AFTERIMAGE-stamp/AFTERIMAGE-install-*.log")
  message(STATUS "${msg}")
endif()
