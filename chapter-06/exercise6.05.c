#include <stdio.h>

// displays a multi-digit integer with its digits backwards
int main(void) {
    long long int num; // for big numbers have fun

    printf("Enter an integer with one or more digits: ");
    scanf("%lld", &num);

    do {
        printf("%lld", num%10); //prints the last digit
        num /= 10;
    } while (num != 0);

    return 0;
}
