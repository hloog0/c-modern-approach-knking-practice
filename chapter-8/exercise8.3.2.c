#include <stdio.h>
#include <stdbool.h>

// modification of repdigit.c that prints a table showing
// how many times each digit appears in the number
// input should be a positive integer
int main(void) {
    bool digit_seen[10] = {false};
    int repeated_digit[10] = {0};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % 10;
        if (!digit_seen[digit]) {
            digit_seen[digit] = true;
            repeated_digit[digit] += 1;
        } else if (digit_seen[digit]) {
            repeated_digit[digit] += 1;
        }
        n /= 10;
    }

    printf("Digit:\t\t0   1   2   3   4   5   6   7   8   9\n");
    printf("Occurrences:\t");

    for (int i = 0; i < 10; i++) {
        printf("%d   ", repeated_digit[i]);
    }
    printf("\n");

    return 0;
}