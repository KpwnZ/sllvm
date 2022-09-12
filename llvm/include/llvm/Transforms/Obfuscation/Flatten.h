#ifndef FLATTEN_H
#define FLATTEN_H

#include "llvm/IR/PassManager.h"

namespace sllvm {

struct Flatten : public llvm::PassInfoMixin<Flatten> {
    llvm::PreservedAnalyses run(llvm::Module &M, llvm::ModuleAnalysisManager &MAM);
};

}  // namespace sllvm

#endif