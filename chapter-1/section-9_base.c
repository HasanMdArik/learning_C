#include <stdio.h>

#define MAXLINE 1000

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
    return 0;
}

int getLine(char line[], int maxLine)
{
    char ch;
    int i;
    for (i = 0; i < maxLine - 3 && (ch = getchar()) != EOF && ch != '\n'; ++i)
        line[i] = ch;

    if (ch == '\n')
    {
        line[i] = '\n';
        i++;
    }
    line[i] = '\0';

    return i;
}

void copy(char from[], char to[])
{
    int i = 0;
    while ((to[i] = from[i]) != '\0')
        i++;
}