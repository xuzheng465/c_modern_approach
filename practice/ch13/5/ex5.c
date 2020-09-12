#include <stdio.h>
#include <ctype.h>

int capitalize(char str[])
{
    while (*str != '\0')
    {
        if (isalpha(*str))
        {
            *str = toupper(*str);
        }
        str++;
    }
    return 0;
}

int capitalize2(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (isalpha(str[i]))
            str[i] = toupper(str[i]);
    }
    return 0;
}

int main()
{
    char str[] = "str100";
    capitalize(str);
    printf("%s\n", str);
    char str2[] = "ahahah200";
    capitalize2(str2);
    printf("%s\n", str2);
}