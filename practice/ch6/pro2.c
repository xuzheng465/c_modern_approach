#include <stdio.h>

int gcd(int, int);

int main()
{
    int num1;
    int num2;
    // printf("Enter two integers: ");
    // scanf("%d%d", &num1, &num2);
    // printf("The first number is %d\nThe second number is %d\n", num1, num2);
    // printf("Greatest common divisor: %d\n", gcd(num1, num2));
    printf("Enter a fraction: ");
    scanf("%d / %d", &num1, &num2);
    printf("In lowest terms: %d/%d\n", num1 / gcd(num1, num2), num2 / gcd(num1, num2));
    return 0;
}

int gcd(int m, int n)
{
    if (n == 0)
        return m;
    else
    {
        return gcd(n, m % n);
    }
}