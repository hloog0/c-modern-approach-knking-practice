#include <stdio.h>

// power function using recursion

double power(double x, int n);

// assume valid input, n is ≥ 0
int main(void) {
    double x;
    int n;

    printf("This program calculates x^n using recursion.\n");
    printf("Enter x: ");
    scanf("%lf", &x);
    printf("Enter n: ");
    scanf("%d", &n);

    printf("%.2f^%d = %.2f\n", x, n, power(x, n));

    return 0;
}

double power(double x, int n) {
    if (n == 0) {
        return 1.0;
    }

    if (n % 2 != 0) { // n is odd
        return x * (power(x, n-1));
    } else { // n is even
        double x_to_n_over_2;
        x_to_n_over_2 = power(x, n/2);
        return x_to_n_over_2 * x_to_n_over_2;
    }
}