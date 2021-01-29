

set(command "${make};install")
execute_process(
  COMMAND ${command}
  RESULT_VARIABLE result
  OUTPUT_FILE "/content/root_src/root_build/VDT-prefix/src/VDT-stamp/VDT-install-out.log"
  ERROR_FILE "/content/root_src/root_build/VDT-prefix/src/VDT-stamp/VDT-install-err.log"
  )
if(result)
  set(msg "Command failed: ${result}\n")
  foreach(arg IN LISTS command)
    set(msg "${msg} '${arg}'")
  endforeach()
  set(msg "${msg}\nSee also\n  /content/root_src/root_build/VDT-prefix/src/VDT-stamp/VDT-install-*.log")
  message(FATAL_ERROR "${msg}")
else()
  set(msg "VDT install command succeeded.  See also /content/root_src/root_build/VDT-prefix/src/VDT-stamp/VDT-install-*.log")
  message(STATUS "${msg}")
endif()
