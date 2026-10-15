#include <stdio.h>

// computes factorial of a positive integer
// largest n that prints correctly, by type of the factorial variable:
//   (a) short: 7   (b) int: 12   (c) long: 20 (64-bit long)   (d) long long: 20
//   (e) float: 34  (f) double: 170  (g) long double: 1754 on x86-64, 170 on Apple Silicon
//   (e)-(g) are approximations; past these values the result overflows to inf
int main(void) {
    unsigned long long num, factorial = 1, i;

    printf("Enter a positive integer: ");
    scanf("%llu", &num);

    for (i = 2; i <= num; i++) {
        factorial *= i;
    }

    printf("Factorial of %llu: %llu\n", num, factorial);
    return 0;
}
