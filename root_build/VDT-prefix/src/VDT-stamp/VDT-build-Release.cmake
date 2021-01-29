

set(command "${make}")
execute_process(
  COMMAND ${command}
  RESULT_VARIABLE result
  OUTPUT_FILE "/content/root_src/root_build/VDT-prefix/src/VDT-stamp/VDT-build-out.log"
  ERROR_FILE "/content/root_src/root_build/VDT-prefix/src/VDT-stamp/VDT-build-err.log"
  )
if(result)
  set(msg "Command failed: ${result}\n")
  foreach(arg IN LISTS command)
    set(msg "${msg} '${arg}'")
  endforeach()
  set(msg "${msg}\nSee also\n  /content/root_src/root_build/VDT-prefix/src/VDT-stamp/VDT-build-*.log")
  message(FATAL_ERROR "${msg}")
else()
  set(msg "VDT build command succeeded.  See also /content/root_src/root_build/VDT-prefix/src/VDT-stamp/VDT-build-*.log")
  message(STATUS "${msg}")
endif()
