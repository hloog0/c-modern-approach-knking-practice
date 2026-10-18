#include <stdio.h>
#include <math.h>

// uses newton's method for finding square roots of x, using prediction y = 1
// terminates when absolute value of difference between old and new y is less than 0.00001 * y
int main(void) {
    double x;
    double x_div_y;
    double y_old = 1.0;
    double y_new; // average of y and x/y, used as the new y
    
    printf("Enter a number: ");
    scanf("%lf", &x);

    // negative input never converges; 0 would divide by zero once y reaches 0
    if (x < 0) {
        printf("Enter a non-negative number.\n");
        return 0;
    }
    if (x == 0) {
        printf("The square root of 0 is 0\n");
        return 0;
    }

    // setup first prediction
    x_div_y = x / y_old;
    y_new = (y_old + x_div_y) / 2;

    while (fabs(y_new - y_old) >= 0.00001 * y_new) {
        y_old = y_new;
        x_div_y = x / y_old;
        y_new = (y_old + x_div_y) / 2;
    }

    printf("The square root of %lf is %lf\n", x, y_new);
    return 0;
}
