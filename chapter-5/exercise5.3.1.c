#include <stdio.h>

// prints how many digits a number has
int main(void) {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The number %d ", num);
    if (num >= 0 && num <= 9) {
        printf("has 1 digit");
    } else if (num > 9 && num <= 99) {
        printf("has 2 digits");
    } else if (num > 99 && num <= 999) {
        printf("has 3 digits");
    } else if (num > 999) {
        printf("has more than 3 digits");
    } else {
        printf("number is negative, program designed for positive numbers only");
    }
    return 0;
}