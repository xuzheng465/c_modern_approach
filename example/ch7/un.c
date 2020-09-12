#include <stdio.h>

int main()
{
    int a = 2147483648;
    printf("%d\n", a);
    // printf("%u\n", -a);
    // printf("%u\n", ~a);
    printf("The size of \"a\" is %d. \n", sizeof(a));
    int c = 1;
    printf("c << 2 :%d\n", c << 2);
    printf("c << 3 :%d\n", c << 3);
    printf("%x\n", ~0xffffffff);

    printf("%x\n", -1029);
    int i = 12345;

    printf("0x110 == %d\n", 0x110);

    int ba = -81;
    printf("%d\n", ba << 1);
}