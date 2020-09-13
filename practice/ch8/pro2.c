/* Checks numbers for repeated digits */

#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    int digit_seen[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);
    while (n > 0)
    {
        digit = n % 10;
        digit_seen[digit]++;
        n /= 10;
    }
    // if (n > 0)
    //     printf("Repeated digit\n");
    // else
    //     printf("No repeated digit\n");
    printf("Digit:\t\t");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", i);
    }
    printf("\n");
    printf("Occurrence:\t");
    for (int j = 0; j < 10; j++)
    {
        printf("%d\t", digit_seen[j]);
    }
    printf("\n");
    return 0;
}