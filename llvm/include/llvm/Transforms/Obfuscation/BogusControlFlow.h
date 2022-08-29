#ifndef BOGUSCONTROLFLOW_H
#define BOGUSCONTROLFLOW_H

#include "llvm/IR/PassManager.h"

namespace sllvm {

struct BogusControlFlow : public llvm::PassInfoMixin<BogusControlFlow> {
    llvm::PreservedAnalyses run(llvm::Module &M, llvm::ModuleAnalysisManager &MAM);
};

}  // namespace sllvm

#endif