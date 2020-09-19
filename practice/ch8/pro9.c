#include <stdio.h>

#define N 10

void printmyth(char (*myth)[N]);

int main()
{
    char myth[N][N];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            myth[i][j] = '.';
        }
    }
    printmyth(myth);
}

void printmyth(char (*myth)[N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%c ", myth[i][j]);
        }
        printf("\n");
    }
}