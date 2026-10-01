#include <stdio.h>

int main(void) {
    int dollars, twenties, tens, fives, ones, leftover;

    printf("Enter a dollar amount: ");
    scanf("%d", &dollars);
    twenties = dollars/20;
    leftover = dollars%20;
    tens = leftover/10;
    leftover = leftover%10;
    fives = leftover/5;
    ones = leftover%5;
    printf("\n");
    printf("$20 bills: %d\n", twenties);
    printf("$10 bills: %d\n", tens);
    printf(" $5 bills: %d\n", fives);
    printf(" $1 bills: %d\n", ones);
}