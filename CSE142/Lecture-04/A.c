#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n < 0)
        n = -n;

    if (n == 0)
    {
        printf("1\n");
        return 0;
    }

    int digits = log10(n) + 1;
    printf("%d\n", digits);

    return 0;
}