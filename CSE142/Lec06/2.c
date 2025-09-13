#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i == 1 || i == n)
            for (int j = 0; j < n; j++)
                printf("*");

        else
            for (int j = 1; j <= n; j++)
                if (j == 1 || j == n)
                    printf("*");
                else
                    printf("1");

        printf("\n");
    }

    return 0;
}