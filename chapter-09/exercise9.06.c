#include <stdio.h>

// write a function that computes the value of the following polynomial:
// 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6
// program asks user to enter a value for x and calls the function to compute, then displays function return

double polynomial_calculation(double x);

// assume valid input for x
int main(void) {
    double x;
    printf("This program calculates the value of the polynomial '3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6', given value of 'x'\n");
    printf("Enter a value for x: ");
    scanf("%lf", &x);
    printf("The value of the polynomial when x is %.3f: %.3f\n", x, polynomial_calculation(x));

    return 0;
}

double polynomial_calculation(double x) {
    double output = (3 * x * x * x * x * x) + (2 * x * x * x * x) - (5 * x * x * x) - (x * x) + (7 * x) - 6;
    return output;
}