#include <stdio.h>

int main()
{
    int h1, m1, h2, m2;

    while (scanf("%d%d%d%d", &h1, &m1, &h2, &m2))
    {
        if (h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0)
            break;

        int res = 0;

        int elapsed1 = 60 * h1 + m1;
        int elapsed2 = 60 * h2 + m2;
        if (elapsed1 > elapsed2)
        {
            res = (1440 - elapsed1 + elapsed2);
        }
        else
        {
            res = (elapsed2 - elapsed1);
        }

        printf("%d\n", res);
    }

    return 0;
}