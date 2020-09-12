/* 13.6 
Exercise 13.06
Write a function named censor that modifies a string by replacing every occurrence of foo by xxx. For example, the string "food fool" would become "xxxd xxxl". Make the function as short as possible without sacrificing clarity.
*/

#include <stdio.h>

void censor(char str[])
{
    while (*str)
    {
        if (*str == 'f' && *(str + 1) == 'o' && *(str + 2) == 'o')
        {
            *str = 'x';
            *(str + 1) = 'x';
            *(str + 2) = 'x';
        }
        str++;
    }
}

int main()
{
    char str[] = "food fool";
    censor(str);
    printf("%s\n", str);
}