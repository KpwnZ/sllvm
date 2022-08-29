
set(CMAKE_CXX_STANDARD 20)

add_llvm_component_library(LLVMSLLVM_OBF
  BogusControlFlow.cpp
  InstructionObf.cpp
  StringObf.cpp
  
  DEPENDS
  intrinsics_gen
)
