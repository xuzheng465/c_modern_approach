#include <stdio.h>
#define N 5

int sum_row(int arr[], int n);

int main()
{
    int arr[N][N];
    for (int i = 0; i < N; i++)
    {
        printf("Enter row %d: ", i + 1);
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Row totals: ");
    for (int x = 0; x < N; x++)
    {
        printf("%d ", sum_row(arr[x], N));
    }
    printf("\n");
    printf("Column totals: ");
    for (int i = 0; i < N; i++)
    {
        int sum = 0;
        for (int j = 0; j < N; j++)
        {
            sum += arr[j][i];
        }
        printf("%d ", sum);
    }
    printf("\n");
}

int sum_row(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}