#include <stdio.h>

int main()
{
    int t;

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n;

        scanf("%d", &n);

        if (n > 10)
        {
            printf("%d %d\n", 10, (n - 10));
        }
        else
        {
            printf("%d %d\n", n, 0);
        }
    }

    return 0;
}