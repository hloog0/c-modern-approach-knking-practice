#include <stdio.h>
// asks user for two integers, then calculates and displays their greatest common divisor (GCD)

int main(void) {
    int num1, num2, remainder;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 == 0) {    
        printf("Greatest common divisor: %d\n", num2);
        return 0;
    } else if (num2 == 0) {
        printf("Greatest common divisor: %d\n", num1);
        return 0;
    }

    // Euclid's algorithm
    while (num2 != 0) {
    remainder = num1 % num2;
    num1 = num2;
    num2 = remainder;
    }

    printf("Greatest common divisor: %d\n", num1);
    
    return 0;
}
