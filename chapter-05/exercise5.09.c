
#include <stdio.h>

// compares two input dates then indicates which comes earlier
int main(void) {
    int m1, m2, d1, d2, y1, y2;
    printf("Enter first date (mm/dd/yy): ");
    scanf("%2d/%2d/%2d", &m1, &d1, &y1);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%2d/%2d/%2d", &m2, &d2, &y2);

    if (y1 < y2) {
        printf("%d/%d/%02d is earlier than %d/%d/%02d\n", m1, d1, y1, m2, d2, y2);
    } else if (y1 > y2) {
        printf("%d/%d/%02d is earlier than %d/%d/%02d\n", m2, d2, y2, m1, d1, y1);

    } else if (y1 == y2) { //if same year, check month
        if (m1 < m2) {
        printf("%d/%d/%02d is earlier than %d/%d/%02d\n", m1, d1, y1, m2, d2, y2);
        } else if (m1 > m2) {
        printf("%d/%d/%02d is earlier than %d/%d/%02d\n", m2, d2, y2, m1, d1, y1);

        } else if (m1 == m2) { //if same month, check date
            if (d1 < d2) {
                printf("%d/%d/%02d is earlier than %d/%d/%02d\n", m1, d1, y1, m2, d2, y2);
            } else if (d1 > d2) {
                printf("%d/%d/%02d is earlier than %d/%d/%02d\n", m2, d2, y2, m1, d1, y1);

            } else if (d1 == d2) { // same date
                printf("It's the same date!\n");
            }
        }
    }
}