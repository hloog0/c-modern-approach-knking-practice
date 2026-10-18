#include <stdio.h>

//asks user for a number n above 2, then prints all even squares between 1 and n
int main(void) {
    int n;

    printf("Enter a positive number above 1: ");
    scanf("%d", &n);

    while (n <= 1) {
        printf("Enter a positive number above 1: ");
        scanf("%d", &n);
    }

    for (int i = 2; i*i <= n;) { //i*i <= n for control ex.
        printf("%d\n", i*i);
        i += 2;
    }

    return 0;
}
