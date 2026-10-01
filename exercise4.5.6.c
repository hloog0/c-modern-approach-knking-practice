//computes check digit for 13 digit ean code (euro)

#include <stdio.h>

int main(void) {
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12;
    int check_digit;

    printf("Enter the first 12 digits of a EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", 
        &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12);
    check_digit = 3 * (n2 + n4 + n6 + n8 + n10 + n12);
    check_digit = check_digit + n1 + n3 + n5 + n7 + n9 + n11;
    check_digit -= 1;
    check_digit %= 10;
    check_digit = 9 - check_digit;
    printf("Check digit: %d\n", check_digit);
    return 0;
}