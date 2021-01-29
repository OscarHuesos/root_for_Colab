

set(command "/usr/local/lib/python2.7/dist-packages/cmake/data/bin/cmake;-G;Unix Makefiles;-DCMAKE_BUILD_TYPE=Release;-DCMAKE_C_COMPILER=/usr/bin/cc;-DCMAKE_C_FLAGS= -Wno-implicit-fallthrough -pipe -Wall -W -pthread -fPIC -Werror=date-time -w -ffunction-sections -fdata-sections;-DCMAKE_CXX_COMPILER=/usr/bin/c++;-DCMAKE_CXX_FLAGS= -std=c++11 -Wno-implicit-fallthrough -Wno-noexcept-type -pipe  -Wshadow -Wall -W -Woverloaded-virtual -fsigned-char -pthread -fPIC -fvisibility-inlines-hidden -Werror=date-time -std=c++11 -w -ffunction-sections -fdata-sections -fno-common -Woverloaded-virtual -fno-strict-aliasing -Wno-nested-anon-types -Wno-covered-switch-default -Wno-unused-local-typedef -fno-rtti;-DCMAKE_CXX_STANDARD=11;-DCMAKE_INSTALL_PREFIX=/content/root_src/root_install;-DLLVM_DIR=/content/root_src/root_build/interpreter/llvm/src;-DClang_DIR=/content/root_src/root_build/interpreter/llvm/src/tools/clang/;-DCLANG_INCLUDE_DIRS=;-DCLAD_BUILD_STATIC_ONLY=ON;-GUnix Makefiles;/content/root_src/root_build/interpreter/llvm/src/tools/cling/tools/plugins/clad/clad-prefix/src/clad")
execute_process(
  COMMAND ${command}
  RESULT_VARIABLE result
  OUTPUT_FILE "/content/root_src/root_build/interpreter/llvm/src/tools/cling/tools/plugins/clad/clad-prefix/src/clad-stamp/clad-configure-out.log"
  ERROR_FILE "/content/root_src/root_build/interpreter/llvm/src/tools/cling/tools/plugins/clad/clad-prefix/src/clad-stamp/clad-configure-err.log"
  )
if(result)
  set(msg "Command failed: ${result}\n")
  foreach(arg IN LISTS command)
    set(msg "${msg} '${arg}'")
  endforeach()
  set(msg "${msg}\nSee also\n  /content/root_src/root_build/interpreter/llvm/src/tools/cling/tools/plugins/clad/clad-prefix/src/clad-stamp/clad-configure-*.log")
  message(FATAL_ERROR "${msg}")
else()
  set(msg "clad configure command succeeded.  See also /content/root_src/root_build/interpreter/llvm/src/tools/cling/tools/plugins/clad/clad-prefix/src/clad-stamp/clad-configure-*.log")
  message(STATUS "${msg}")
endif()
