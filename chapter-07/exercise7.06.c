#include <stdio.h>

// prints sizeof() with different data types
int main(void) {
    printf("sizeof(int) is %zu\n", sizeof(int));
    printf("sizeof(short) is %zu\n", sizeof(short));
    printf("sizeof(long) is %zu\n", sizeof(long));
    printf("sizeof(float) is %zu\n", sizeof(float));
    printf("sizeof(double) is %zu\n", sizeof(double));
    printf("sizeof(long double) is %zu\n", sizeof(long double));

    return 0;
}
