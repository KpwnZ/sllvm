#ifndef INSTRUCTIONOBF_H
#define INSTRUCTIONOBF_H

#include "llvm/IR/PassManager.h"

namespace sllvm {

struct InstructionObf : public llvm::PassInfoMixin<InstructionObf> {
    llvm::PreservedAnalyses run(llvm::Module &M, llvm::ModuleAnalysisManager &FAM);
};

}  // namespace sllvm

#endif