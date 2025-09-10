#include <stdio.h>

int main()
{
    int t;
    int a, b, c;

    scanf("%d", &t);

    int i;
    for (i = 1; i <= t; i++)
    {
        scanf("%d%d%d", &a, &b, &c);

        if (
            !((a + b) > c) || !((b + c) > a) || !((c + a) > b))
        {
            printf("Case %d: Invalid\n", i);
        }
        else
        {
            if ((a == b) && (b == c) && (a == c))
            {
                printf("Case %d: Equilateral\n", i);
            }
            else if (a == b || b == c || c == a)
            {
                printf("Case %d: Isosceles\n", i);
            }
            else
            {
                printf("Case %d: Scalene\n", i);
            }
        }
    }

    return 0;
}