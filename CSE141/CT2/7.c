#include <stdio.h>

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }

    int i = 1, j;
    do
    {
        j = 1;
        do
        {
            printf("%d", i);
            j++;
        } while (j <= i);
        printf("\n");
        i++;
    } while (i <= 5);

    return 0;
}