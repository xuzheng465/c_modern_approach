#include <stdio.h>

int main()
{
    int month;
    int day;
    int year;
    printf("Enter a data (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);
    printf("You entered the date %d%.2d%.2d\n", year, month, day);
    return 0;
}