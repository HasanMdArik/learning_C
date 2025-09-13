#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i < n; i++)
    {
        if (i == 1)
        {
            // padding
            for (int j = 0; j < n - 1; j++)
            {
                printf(" ");
            }

            // star
            printf("*");
        }
        else
        {
            // Padding
            for (int j = 0; j < n - i; j++)
            {
                printf(" ");
            }
            // Star
            printf("*");
            // Spaces
            int spaces = 2 * i - 3;
            for (int i = 0; i < spaces; i++)
            {
                printf(" ");
            }

            // Star
            printf("*");
        }
        printf("\n");
    }
    for (int i = 0; i < 2 * n - 1; i++)
    {
        printf("*");
    }

    return 0;
}