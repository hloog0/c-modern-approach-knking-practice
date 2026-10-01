#include <stdio.h>

int main() {
    float x;
    printf("Enter value for x: ");
    scanf("%f", &x);
    printf("%f", -6 + x*(7 + x*(-1 + x*(-5 + x*(3*x+2)))));
}