

set(command "make;compiler=gcc;cpp0x=1;CXXFLAGS= -mno-rtm;CPLUS=/usr/bin/c++;CONLY=/usr/bin/cc")
execute_process(
  COMMAND ${command}
  RESULT_VARIABLE result
  OUTPUT_FILE "/content/root_src/root_build/TBB-prefix/src/TBB-stamp/TBB-build-out.log"
  ERROR_FILE "/content/root_src/root_build/TBB-prefix/src/TBB-stamp/TBB-build-err.log"
  )
if(result)
  set(msg "Command failed: ${result}\n")
  foreach(arg IN LISTS command)
    set(msg "${msg} '${arg}'")
  endforeach()
  set(msg "${msg}\nSee also\n  /content/root_src/root_build/TBB-prefix/src/TBB-stamp/TBB-build-*.log")
  message(FATAL_ERROR "${msg}")
else()
  set(msg "TBB build command succeeded.  See also /content/root_src/root_build/TBB-prefix/src/TBB-stamp/TBB-build-*.log")
  message(STATUS "${msg}")
endif()
