#ifndef INDIRECTCALL_H
#define INDIRECTCALL_H

#include "llvm/IR/PassManager.h"

namespace sllvm {

struct IndirectCall : public llvm::PassInfoMixin<IndirectCall> {
    llvm::PreservedAnalyses run(llvm::Module &M, llvm::ModuleAnalysisManager &FAM);
};

}  // namespace sllvm

#endif