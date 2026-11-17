# Lab 3 - Memory Safety and Code Quality Analysis

## Experiment 3: Memory Error Detection

Tools used:
- GCC
- Valgrind
- AddressSanitizer

Memory defects analysed:
1. Uninitialized variable
2. Memory leak
3. Double free

Each defect was tested using original and corrected C programs.

## Experiment 4: Dirty Code Analysis

Tool used:
- Cppcheck
- GCC

Activities:
1. Created original dirty C code.
2. Analysed code using Cppcheck.
3. Identified unnecessary conditions and code-quality issues.
4. Refactored the program.
5. Repeated Cppcheck analysis.
6. Compiled and executed the corrected program.

## Folder Structure

- Exp3: Original and fixed memory programs
- Exp4: Original and refactored code
- evidence: Tool outputs
- report: Experiment comparison and report files

## Result

Memory defects were detected and corrected.
The refactored code passed Cppcheck without warnings and compiled successfully.
