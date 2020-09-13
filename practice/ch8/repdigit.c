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
    printf("Repeated digit(s): ");
    for (int i = 0; i < 10; i++)
    {
        if (digit_seen[i] > 1)
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}