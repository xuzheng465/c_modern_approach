#include <stdio.h>

void print_loop(int k, int n, int total_k);
int g_arr[100];

int main()
{
    int eachline;
    int number;

    printf("Please enter the number printed each line.\n");
    scanf(" %d", &eachline);
    printf("Please enter the number: ");
    scanf(" %d", &number);
    print_loop(eachline, number, eachline);
    return 0;
}

void print_loop(int k, int n, int total_k)
{
    if (k == 0)
    {
        for (int i = total_k; i >= 1; i--)
        {
            if (i != total_k)
                printf(" ");
            printf("%d", g_arr[i]);
        }
        printf("\n");
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        g_arr[k] = i;
        print_loop(k - 1, n, total_k);
    }
    return;
}