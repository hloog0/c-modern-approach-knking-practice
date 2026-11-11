# Chapter 9

Practice programs from Chapter 9.

> Line count = total lines in each source file as stored, including comments and blank lines.

| Exercise file | Summary | Lines |
|---|---|---:|
| `exercise9.01.c` | Reads 10 integers and sorts them with a recursive selection sort. | 63 |
| `exercise9.06.c` | Evaluates 3x⁵ + 2x⁴ − 5x³ − x² + 7x − 6 for a user-entered x. | 23 |
| `exercise9.07.c` | Computes xⁿ recursively by repeated squaring (x·xⁿ⁻¹ for odd n, (xⁿᐟ²)² for even n). | 35 |
| `exercise9.08.c` | Simulates games of craps until the player quits, then prints wins and losses. | 83 |

Projects 2–5 are skipped: they rework earlier chapters' programs to use functions, which didn't introduce anything new, so I moved on to new concepts instead.

`exercise9.08.c` adapts the roll structure suggested by Claude: print the first roll once before the first-roll checks, and roll → print → check at the top of each pass of the point loop.
