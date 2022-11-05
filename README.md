# sllvm
An obfuscator produces shit-like code.

Obfuscation passes are implemented with new pass manager in llvm/lib/Transforms/Obfuscation for learning purpose.

## Version
- [llvm 14](https://github.com/KpwnZ/sllvm/tree/release/14.x)
## Features

- `-mllvm -stringobf` C String obfuscation
- `-mllvm -stringobf` Objective-C String obfuscation
- `-mllvm -instrobf` Instruction substitution
- `-mllvm -bcf` Bogus control flow
- `-mllvm -flatten` Flatten control flow
- `-mllvm -indircall` Simple indirect function call
- `-mllvm -indirbr` Indirect branching

## TODO
- Better instruction substitution
- Better Flatten control flow
- Better bogus control flow

