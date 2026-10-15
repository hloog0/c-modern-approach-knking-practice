#include <stdio.h>

// assumes valid input, no spaces
// evaluates expression that the user inputs e.g. 1+2.5*3
// evaluated left to right
int main(void) {
    float num, result;
    int operator;

    printf("Enter an expression: ");
    scanf("%f", &result);

    while ((operator = getchar()) != '\n' && operator != EOF) {
        scanf("%f", &num);
        switch (operator) {
            case '+':
                result += num; break;
            case '-':
                result -= num; break;
            case '*':
                result *= num; break;
            case '/':
                result /= num; break;
        }
    }
    printf("Value of expression: %.3f\n", result);
    return 0;
}
