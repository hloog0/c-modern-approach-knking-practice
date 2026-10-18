#include <stdio.h>

// modification of square2.c, pauses every 24 squares and asks user to press enter to continue
int main(void) {
    int i, n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    getchar(); // consumes leftover newline from scanf
    
    for (i = 1; i <= n; i++) {
        printf("%10d%10d\n", i, i * i);
        if (i % 24 == 0 && i != n) { // no pause after the last row
            printf("Press Enter to continue...");
            getchar();
        }
    }

    return 0;
}

