#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int sum = 1;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            sum += (i + n / i);
        }
    }

    if (sum == n)
    {
        printf("Perfect Number\n");
    }
    else
    {
        printf("Not Perfect Number\n");
    }

    return 0;
}