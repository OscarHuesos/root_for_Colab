

set(command "/usr/local/lib/python2.7/dist-packages/cmake/data/bin/cmake;-Dinstall_dir=/content/root_src/root_build;-Dsource_dir=/content/root_src/root_build/TBB-prefix/src/TBB;-P;/content/root_src/cmake/scripts/InstallTBB.cmake")
execute_process(
  COMMAND ${command}
  RESULT_VARIABLE result
  OUTPUT_FILE "/content/root_src/root_build/TBB-prefix/src/TBB-stamp/TBB-install-out.log"
  ERROR_FILE "/content/root_src/root_build/TBB-prefix/src/TBB-stamp/TBB-install-err.log"
  )
if(result)
  set(msg "Command failed: ${result}\n")
  foreach(arg IN LISTS command)
    set(msg "${msg} '${arg}'")
  endforeach()
  set(msg "${msg}\nSee also\n  /content/root_src/root_build/TBB-prefix/src/TBB-stamp/TBB-install-*.log")
  message(FATAL_ERROR "${msg}")
else()
  set(msg "TBB install command succeeded.  See also /content/root_src/root_build/TBB-prefix/src/TBB-stamp/TBB-install-*.log")
  message(STATUS "${msg}")
endif()
