#include <stdio.h>

#define MAXLINE 1000

int getLine(char line[], int maxLine);

int main()
{
    int maxLen = 0, len;
    char line[MAXLINE];
    char longestLine[MAXLINE];

    while ((len = getLine(line, MAXLINE)) != 0)
        if (len > 80)
        {
            printf("%s", line);
        }

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
