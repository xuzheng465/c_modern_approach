#include <stdio.h>

int main()
{
    int item_number;
    float price;
    int day, month, year;
    printf("Enter item number: ");
    scanf("%d", &item_number);
    printf("Enter unit price: ");
    scanf("%f", &price);
    printf("Enter purchase data (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);
    printf("Item\t\tUnit\t\tPurchase\n");
    printf("    \t\tPrice\t\tDate\n");
    printf("%d\t\t$ %.2f\t\t%.2d/%.2d/%d\n", item_number, price, month, day, year);
}
