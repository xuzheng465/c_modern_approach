#include <stdio.h>
#include <ctype.h>
#define MAX_STR 10

// 在开始存储输入字符前跳过空白字符
int read_line1(char str[], int n);

// 再遇到第一个空白字符时停止读入. isspace函数
int read_line2(char str[], int n);

// 在遇到第一个换行符时停止读入, 然后把换行符存储到字符串中
int read_line3(char str[], int n);

// 把没有空间存储的字符留下以备后用.
int read_line4(char str[], int n);

int read_line(char str[], int n)
{
    int ch, i = 0;
    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;
    str[i] = '\0';
    return i;
}
int read_line1(char str[], int n)
{
    int ch, i = 0;
    int passzero = 0;
    while ((ch = getchar()) != '\n')
    {
        if (!passzero)
        {
            if (isspace(ch))
                continue;
            else
            {
                if (i < n)
                    str[i++] = ch;
                passzero = 1;
            }
        }
        else
        {
            if (i < n)
                str[i++] = ch;
        }
    }
    str[i] = '\0';
    return i;
}

int read_line2(char str[], int n)
{
    int ch, i = 0;
    while ((ch = getchar()) != '\n')
    {
        if (isspace(ch))
            break;
        if (i < n)
            str[i++] = ch;
    }

    str[i] = '\0';
    return i;
}

int read_line3(char str[], int n)
{
    int ch, i = 0;
    while ((ch = getchar()) != '\n')
        if (i < n - 1)
            str[i++] = ch;

    str[i++] = '\n';
    str[i] = '\0';
    return i;
}

int read_line4(char str[], int n)
{
}

int main()
{
    char str[MAX_STR];
    // read_line(str, MAX_STR);
    //read_line1(str, MAX_STR);
    // read_line2(str, MAX_STR);
    read_line3(str, MAX_STR);
    //read_line4(str, MAX_STR);
    printf("%s\n", str);
    return 0;
}