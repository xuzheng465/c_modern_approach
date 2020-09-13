#include <stdio.h>

int main()
{
    printf("%6d,%4d\n", 86, 1040);
    printf("%12.5e\n", 30.253);
    printf("%.4f\n", 83.162);
    printf("%-6.2g\n", .0000009979);
    int scores[] = {88, 94, 70, 92, 83, 92, 1, 92};
    printf("%lu\n", sizeof(scores));

    return 0;
}