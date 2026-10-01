//computes check digit for 11 digit upc

#include <stdio.h>

int main(void) {
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11;
    int check_digit;

    printf("Enter the first 11 digits of a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", 
        &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11);
    check_digit = 3 * (n1 + n3 + n5 + n7 + n9 + n11);
    check_digit = check_digit + n2 + n4 + n6 + n8 + n10;
    check_digit -= 1;
    check_digit %= 10;
    check_digit = 9 - check_digit;
    printf("Check digit: %d", check_digit);
    return 0;
}