

set(command "/usr/local/lib/python2.7/dist-packages/cmake/data/bin/cmake;-Dmake=${make};-Dconfig=${config};-P;/content/root_src/root_build/interpreter/llvm/src/tools/cling/tools/plugins/clad/clad-prefix/src/clad-stamp/clad-install-Release-impl.cmake")
execute_process(
  COMMAND ${command}
  RESULT_VARIABLE result
  OUTPUT_FILE "/content/root_src/root_build/interpreter/llvm/src/tools/cling/tools/plugins/clad/clad-prefix/src/clad-stamp/clad-install-out.log"
  ERROR_FILE "/content/root_src/root_build/interpreter/llvm/src/tools/cling/tools/plugins/clad/clad-prefix/src/clad-stamp/clad-install-err.log"
  )
if(result)
  set(msg "Command failed: ${result}\n")
  foreach(arg IN LISTS command)
    set(msg "${msg} '${arg}'")
  endforeach()
  set(msg "${msg}\nSee also\n  /content/root_src/root_build/interpreter/llvm/src/tools/cling/tools/plugins/clad/clad-prefix/src/clad-stamp/clad-install-*.log")
  message(FATAL_ERROR "${msg}")
else()
  set(msg "clad install command succeeded.  See also /content/root_src/root_build/interpreter/llvm/src/tools/cling/tools/plugins/clad/clad-prefix/src/clad-stamp/clad-install-*.log")
  message(STATUS "${msg}")
endif()
