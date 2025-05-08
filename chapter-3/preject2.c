#include <stdio.h>

int main(void)
{
    int itemNumber;
    printf("Enter item number: ");
    scanf("%d", &itemNumber);

    float price;
    printf("Enter unit price: ");
    scanf("%f", &price);

    int date, month, year;
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &date, &year);

    printf("Item\t\tUnit\t\tPurchase\n \t\tPrice\t\tDate\n");
    printf("%d\t\t$%7.2f\t\t%d/%d/%d\n", itemNumber, price, month, date, year);

    return 0;
}