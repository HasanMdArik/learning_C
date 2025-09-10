#include <stdio.h>

int main()
{
    for (int i = 1, j = 1; i <= 50; i++)
    {
        printf("%d", i);
        i = i + i * j;
        j++;
    }
    return 0;
}