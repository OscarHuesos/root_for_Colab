# Install script for directory: /content/root_src/interpreter/llvm/src/tools/clang/lib/Headers

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/content/root_src/root_install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xclang-headersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/5.0.0/include" TYPE FILE PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ FILES
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/adxintrin.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/altivec.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/ammintrin.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/arm_acle.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/armintr.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/avx2intrin.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/avx512bwintrin.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/avx512cdintrin.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/avx512vpopcntdqintrin.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/avx512dqintrin.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/avx512erintrin.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/avx512fintrin.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/avx512ifmaintrin.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/avx512ifmavlintrin.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/avx512pfintrin.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/avx512vbmiintrin.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/avx512vbmivlintrin.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/avx512vlbwintrin.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/avx512vlcdintrin.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/avx512vldqintrin.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/avx512vlintrin.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/avxintrin.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/bmi2intrin.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/bmiintrin.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/__clang_cuda_builtin_vars.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/__clang_cuda_cmath.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/__clang_cuda_complex_builtins.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/__clang_cuda_intrinsics.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/__clang_cuda_math_forward_declares.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/__clang_cuda_runtime_wrapper.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/clzerointrin.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/cpuid.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/clflushoptintrin.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/emmintrin.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/f16cintrin.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/float.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/fma4intrin.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/fmaintrin.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/fxsrintrin.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/htmintrin.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/htmxlintrin.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/ia32intrin.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/immintrin.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/intrin.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/inttypes.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/iso646.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/limits.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/lwpintrin.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/lzcntintrin.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/mm3dnow.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/mmintrin.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/mm_malloc.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/module.modulemap"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/msa.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/mwaitxintrin.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/nmmintrin.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/opencl-c.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/pkuintrin.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/pmmintrin.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/popcntintrin.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/prfchwintrin.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/rdseedintrin.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/rtmintrin.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/s390intrin.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/shaintrin.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/smmintrin.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/stdalign.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/stdarg.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/stdatomic.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/stdbool.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/stddef.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/__stddef_max_align_t.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/stdint.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/stdnoreturn.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/tbmintrin.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/tgmath.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/tmmintrin.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/unwind.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/vadefs.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/varargs.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/vecintrin.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/wmmintrin.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/__wmmintrin_aes.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/__wmmintrin_pclmul.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/x86intrin.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/xmmintrin.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/xopintrin.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/xsavecintrin.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/xsaveintrin.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/xsaveoptintrin.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/xsavesintrin.h"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/xtestintrin.h"
    "/content/root_src/root_build/interpreter/llvm/src/tools/clang/lib/Headers/arm_neon.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xclang-headersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/5.0.0/include/cuda_wrappers" TYPE FILE PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ FILES
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/cuda_wrappers/algorithm"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/cuda_wrappers/complex"
    "/content/root_src/interpreter/llvm/src/tools/clang/lib/Headers/cuda_wrappers/new"
    )
endif()

