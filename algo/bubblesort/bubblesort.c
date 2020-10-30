#include <stdio.h>
#include <time.h>
void swap(int *a, int *b)
{
    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void bubblesort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
        }
    }
}

int main()
{
    int arr[] = {123,
                 32,
                 4,
                 23213,
                 66423};
    int n = sizeof(arr) / sizeof(arr[0]);
    clock_t t;
    t = clock();
    bubblesort(arr, n);
    t = clock() - t;
    double time_taken = ((double)t) / CLOCKS_PER_SEC;
    printf("Sorted Array: \n");
    printArray(arr, n);
    printf("Insertion sort took %f seconds to execute \n", time_taken);
    return 0;
}
