/*
    Write a program that asks the user to enter a U.S. dollar amount and then shows how to pay that amount using the smallest number of $20, $10, $5 and $1 bills:

    Enter a dollar amount: 93

    $20 bills: 4
    $10 bills: 1
    $5 bills: 0
    $1 bills: 3
*/

#include <stdio.h>

int main()
{
    int price;
    printf("Enter a dollar amount: ");
    scanf("%d", &price);

    int b20 = price / 20;
    price = price % 20;
    int b10 = price / 10;
    price = price % 10;
    int b5 = price / 5;
    price = price % 5;
    printf("$20 bills: %d\n", b20);
    printf("$10 bills: %d\n", b10);
    printf(" $5 bills: %d\n", b5);
    printf(" $1 bills: %d\n", price);
    return 0;
}