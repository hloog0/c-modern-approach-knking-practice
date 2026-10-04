#include <stdio.h>
// Prints a table of squares using an odd method
// modification of textbook program square3.c
int main(void)
{
    int n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    for (int odd = 3, i = 1, square = 1; i <= n; odd += 2, i++) {
        printf("%10d%10d\n", i, square);
        square += odd;
    }

    return 0;
}
