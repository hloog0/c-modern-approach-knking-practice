#include <stdio.h>
// asks user for n
// approximates eulers number (e) using 1 + 1/1! + ... + 1/n!

int main(void) {
    int n;
    float e = 1.0f;
    printf("Let's approximate Euler's number (e)!\n");
    printf("Enter a positive number n: ");
    scanf("%d", &n);

    while (n < 1) {
        printf("Enter a positive number n:");
        scanf("%d", &n);
    }

    int i = 1;
    float n_factorial = 1.0f;
    do {
        e += 1.0f / n_factorial;
        i++;
        n_factorial *= i;
    } while (i <= n);

    printf("Euler's number (e) approximately equals: %.10f\n", e);

    return 0;
}
