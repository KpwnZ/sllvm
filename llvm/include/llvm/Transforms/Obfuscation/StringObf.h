#ifndef STRINGOBF_H
#define STRINGOBF_H

#include "llvm/IR/PassManager.h"

namespace sllvm {

struct StringObf : public llvm::PassInfoMixin<StringObf> {
    llvm::PreservedAnalyses run(llvm::Module &M, llvm::ModuleAnalysisManager &MAM);
};

}

#endif