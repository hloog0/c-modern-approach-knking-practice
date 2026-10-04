#include <stdio.h>
//asks user for a fraction, then reduces the fraction to lowest terms

int main(void) {
    int numer, denom, GCD;
    int num1, num2;

    printf("Enter a fraction [x/y]: ");
    scanf("%d/%d", &numer, &denom);

    if (denom == 0) {
        printf("Can't divide by 0!");
        return 0;
    } else if (numer == 0) {
        printf("In lowest terms: 0/1");
        return 0;
    }

    num1 = numer;
    num2 = denom;

    // Euclid's algorithm
    while (num2 != 0) {
    GCD = num1 % num2;
    num1 = num2;
    num2 = GCD;
    }

    //divide numerator and denominator by GCD
    numer /= num1;
    denom /= num1;

    printf("In lowest terms: %d/%d\n", numer, denom);

    return 0;
}
