#include <stdio.h>
int main(void)
{
    long n, i = 1, sum = 0;
    printf("This program sums a series of integers.\n");
    printf("Enter integers (0 to terminate): \n");
    printf("%ld. ", i);
    scanf("%ld", &n);
    while (n != 0)
    {
        sum += n;
        i++;
        printf("%ld. ", i);
        scanf("%ld", &n);
    }
    printf("Entered 0. Exit\n");
    printf("The sum of %ld numbers is %ld\n", i, sum);
    return 0;
}