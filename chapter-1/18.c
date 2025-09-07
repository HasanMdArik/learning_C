#include <stdio.h>

#define MAXLINE 1000

int getLineWithoutTrailingBlanks(char line[], int maxLen);

int main()
{
    char line[MAXLINE];
    int len = 0;
    while ((len = getLineWithoutTrailingBlanks(line, MAXLINE)) != 0)
    {
        printf("%s", line);
    }
    return 0;
}

int getLineWithoutTrailingBlanks(char line[], int maxLen)
{
    int i, hasNonWhitespaceFound = 0;
    int ch;
    for (i = 0; i < maxLen - 2 && (ch = getchar()) != EOF && ch != '\n'; i++)
        if (hasNonWhitespaceFound || ch != ' ' && ch != '\t')
        {
            line[i] = ch;
            if (!hasNonWhitespaceFound)
                hasNonWhitespaceFound = 1;
        }
        else
            i--;

    if (ch == '\n')
    {
        line[i] = '\n';
        i++;
    }

    line[i] = '\0';

    return i;
}