# Chapter 8

Practice programs from Chapter 8.

> Line count = total lines in each source file as stored, including comments and blank lines.

| Exercise file | Summary | Lines |
|---|---|---:|
| `exercise8.01.c` | Lists which digits of a number are repeated. | 36 |
| `exercise8.02.c` | Prints a table of how many times each digit appears in a number. | 36 |
| `exercise8.03.c` | Checks numbers for repeated digits until a number ≤ 0 is entered. | 42 |
| `exercise8.04.c` | Reverses 10 numbers, using a `sizeof` macro for the array length. | 22 |
| `exercise8.05.c` | Prints a compound interest table, compounding monthly but showing annual balances. | 37 |
| `exercise8.06.c` | Translates a message into B1FF-speak. | 44 |
| `exercise8.07.c` | Reads a 5×5 integer array and prints row and column totals. | 34 |
| `exercise8.08.c` | Reads five quiz grades for five students; prints per-student totals/averages and per-quiz average, high, and low. | 67 |
| `exercise8.09.c` | Generates a random A–Z walk across a 10×10 grid, stopping early if surrounded. | 115 |
| `exercise8.14.c` | Reverses the words in a sentence, keeping the terminating punctuation at the end. | 74 |
| `exercise8.15.c` | Encrypts a message with a Caesar cipher, re-prompting until the shift is a number from 1 to 25. | 49 |
| `exercise8.16.c` | Tests whether two words are anagrams, ignoring case and non-letters. | 40 |

Projects 10–13 are skipped: they rework earlier chapters' programs to use arrays, which didn't introduce anything new, so I moved on to new concepts instead.

`exercise8.03.c` adapts the nested-loop structure (inner digit loop with `break`, `num > 0` check afterward) suggested by Claude.

`exercise8.15.c` discards any characters past the 80-character limit before reading the shift, which Claude recommended. The book doesn't require handling this edge case.
