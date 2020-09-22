#include <stdio.h>
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    unsigned total = 0;
    for (int j = 0; j < sizeof(a); j++)
    {
        total += a[j];
    }
    // printf("The size of a is %d\n", sizeof(a));
    printf("sum of array is %d\n", total);
}
/*
    Why didn’t the no_segfault_ex program segfault?

    > No stack overflow

    Why does the no_segfault_ex produce inconsistent outputs?

    > undefined array position, random data inside

    Why is sizeof incorrect? How could you still use sizeof but make the code correct?

    sizeof gets the total length of array, one integer size is 4, 5 integer size is 20. 



*/