#include <stdio.h>

int main(void) {
    int item_number;
    float unit_price;
    int month, day, year;

    printf("Enter item number: ");
    scanf("%d", &item_number);
    printf("Enter unit price: ");
    scanf("%f", &unit_price);
    printf("enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Item\t\tUnit\t\tPurchase\n");
    printf("\t\tPrice\t\tDate\n");
    printf("%-16d$%7.2f        %02d/%02d/%d",
            item_number, unit_price, month, day, year);
    return 0;
}