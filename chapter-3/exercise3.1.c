#include <stdio.h>

int main(void) {
    int mm, dd, yyyy;
    scanf("%d/%d/%d", &mm, &dd, &yyyy);
    printf("You entered the date %02d%02d%d", yyyy, mm, dd);
    return 0;
}