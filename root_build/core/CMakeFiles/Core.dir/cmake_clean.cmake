file(REMOVE_RECURSE
  "../lib/libCore.pdb"
  "../lib/libCore.so"
)

# Per-language clean rules from dependency scanning.
foreach(lang C CXX)
  include(CMakeFiles/Core.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
