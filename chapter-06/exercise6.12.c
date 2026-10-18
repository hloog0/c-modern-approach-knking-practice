#include <stdio.h>
// extension/modification of exercise 6.5.11 where instead of nth term
// asks user for epsilon (small floating-point) number
// keeps adding terms until current term 1/n! is less than epsilon

int main(void) {
    float epsilon;
    float e = 1.0f;
    printf("Let's approximate Euler's number (e)!\n");
    printf("We'll use epsilon to target how small the last term should be.\n");
    printf("In other words, this program will stop adding terms once 1/n! is less than epsilon.\n");
    printf("-> Enter epsilon (some small number between 1 and 0): ");
    scanf("%f", &epsilon);

    while (epsilon >= 1 || epsilon <= 0) {
        printf("Enter a number between 1 and 0: ");
        scanf("%f", &epsilon);
    }

    int i = 1;
    float n_factorial = 1.0f;

    while (1/n_factorial >= epsilon) {
        e += 1.0f / n_factorial;
        i++;
        n_factorial *= i;
    }

    printf("Euler's number (e) approximately equals: %.10f\n", e);

    return 0;
}
