#include <stdio.h>
#include <stdbool.h>

// modification of repdigit.c program that shows which digits were repeated instead of
// outputing 'Repeated digit" and exiting when encountering a repeated digit
// input should be a positive integer
int main(void) {
    bool digit_seen[10] = {false};
    bool repeated_digit[10] = {false};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % 10;
        if (!digit_seen[digit]) {
            digit_seen[digit] = true;
        } else if (digit_seen[digit]) {
            repeated_digit[digit] = true;
        }
        n /= 10;
    }

    printf("Repeated digit(s):");

    for (int i = 0; i < 10; i++) {
        if (repeated_digit[i]) {
            printf(" %d", i);
        }
    }
    printf("\n");

    return 0;
}