#include <stdio.h>
//finds the largest in a series of numbers entered by the user
//numbers entered one by one; when user enters 0 or negative number, displays largest non-negative

int main(void) {
    float number;
    float largest = 0.0f;

    printf("Enter a positive number, or enter 0 to end, and display the largest entered number: ");
    scanf("%f", &number);

    if (number == 0) {
        printf("\nThe largest number entered was 0\n");
        return 0;
    }

    if (number < 0) {
        printf("\nYou entered a negative number. Goodbye.");
        return 0;
    }

    do {
        if (number > largest) {
            largest = number;
        }
        printf("Enter a number: ");
        scanf("%f", &number);
    } while (number > 0);

    printf("\nThe largest number entered was %f\n", largest);

    return 0;
}
