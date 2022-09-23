#ifndef INDIRECTBRANCH_H
#define INDIRECTBRANCH_H

#include "llvm/IR/PassManager.h"

namespace sllvm {

struct IndirectBranch : public llvm::PassInfoMixin<IndirectBranch> {
    llvm::PreservedAnalyses run(llvm::Module &M, llvm::ModuleAnalysisManager &MAM);
};

}  // namespace sllvm

#endif
