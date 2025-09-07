#include <stdio.h>

#define MAXLINE 20

int getLine(char line[], int maxLine);
void copy(char from[], char to[]);

int main()
{
    int maxLen = 0, len;
    char line[MAXLINE];
    char longestLine[MAXLINE];

    while ((len = getLine(line, MAXLINE)) != 0)
        if (len > maxLen)
        {
            maxLen = len;
            copy(line, longestLine);
        }

    printf("%s", longestLine);
    printf("Length of the longest line: %d", maxLen);
    return 0;
}

int getLine(char line[], int maxLine)
{
    char ch;
    int i, len;
    for (i = 0, len = 0; (ch = getchar()) != EOF && ch != '\n'; ++len)
        if (i < maxLine - 2)
        {
            line[i] = ch;
            i++;
        }

    if (ch == '\n')
    {
        line[i] = '\n';
        i++;
    }
    line[i] = '\0';

    return len;
}

void copy(char from[], char to[])
{
    int i = 0;
    while ((to[i] = from[i]) != '\0')
        i++;
}