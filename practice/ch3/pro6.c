#include <stdio.h>

int main()
{
    int num1, demum1, num2, denum2;

    printf("Enter two fractions separated by a plus sign: ");
    scanf("%d/%d+%d/%d", &num1, &demum1, &num2, &denum2);
    int res = num1 * denum2 + num2 * demum1;
    int deres = demum1 * denum2;
    printf("The sum is %d/%d\n", res, deres);
}