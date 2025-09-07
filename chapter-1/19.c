#include <stdio.h>

#define MAXLINE 1000

int getLine(char line[], int maxLen);
void reverse(char s[]);

int main()
{
    char line[MAXLINE];
    int len = 0;
    while ((len = getLine(line, MAXLINE)) != 0)
    {
        printf("%s", line);
        reverse(line);
        printf("%s", line);
    }
    return 0;
}

int getLine(char line[], int maxLen)
{
    int i;
    int ch;
    for (i = 0; i < maxLen - 2 && (ch = getchar()) != EOF && ch != '\n'; i++)
        line[i] = ch;

    if (ch == '\n')
    {
        line[i] = '\n';
        i++;
    }

    line[i] = '\0';

    return i;
}

void reverse(char s[])
{
    int len, ch;
    for (len = 0; (ch = s[len]) != '\0'; ++len)
        ;

    int i = 0, j = len - 1, temp;
    while (i <= j)
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
}