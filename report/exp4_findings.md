
# Experiment 4 - Dirty Code Analysis Findings

| Line | Finding | Security consequence | Coding standard |
|---|---|---|---|
| 5, 7 | Small destination buffer and unsafe strcpy() | Buffer overflow, memory corruption and possible program crash | CERT C STR31-C |
| 9 | Magic number 75 | Makes code difficult to maintain and modify consistently | Maintainability practice |
| 11-16 | Deeply nested conditional logic | Makes validation difficult to review and maintain | MISRA C:2012 Rule 15.6 (compound statements) |
| 18-20 | Dead code using if(0) | Unreachable code increases maintenance complexity | MISRA C:2012 Rules 2.1 and 2.2 |
| 23 | Unchecked fopen() return value | NULL FILE pointer can cause invalid memory access | CERT C EXP34-C |
| 24 | Unchecked fprintf() return value | Failed writes may go undetected, resulting in incomplete data | Defensive I/O error handling |
| 26 | Unchecked fclose() return value | File closing or flushing errors may go undetected | CERT C FIO42-C |

## Additional observations

- No explicitly suppressed compiler warnings were present in the supplied snippet.
- No gets() function was present.
- The strcpy() operation writes beyond the 10-byte destination buffer.

## Refactoring performed

1. Replaced unsafe string handling with a sufficiently sized initialized const array.
2. Introduced named constants.
3. Removed unnecessary nested conditions.
4. Removed unreachable dead code.
5. Checked fopen() for failure.
6. Checked fprintf() for failure.
7. Checked fclose() for failure.

## Cppcheck Comparison

Original code:
- Buffer access out of bounds.
- Three unnecessary condition warnings.

Refactored code:
- Zero warnings.
- No reported errors.

## Compilation and Execution

Compiler: GCC

Flags: -Wall -Wextra -Wpedantic -std=c11

Result: Successful compilation without warnings.

Program output: Excellent
