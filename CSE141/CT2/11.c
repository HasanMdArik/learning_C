#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    

    int loop1Start, loop2End;

    for (int i = 1; i <= n; i++)
    {
        loop1Start = i;
        loop2End = i - 1;
        for (int j = loop1Start; j <= n; j++)
        {
            printf("%d", j);
        }
        for (int j = 1; j <= loop2End; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}