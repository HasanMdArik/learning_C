#include <stdio.h>

int isPrime(int n)
{
    if (n < 2)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    int res = 1;

    for (int i = 2; i * i <= n; i++)
    {

        if (n % i == 0)
        {
            res = 0;
            break;
        }
    }

    return res;
}

int main()
{
    int n;
    scanf("%d", &n);

    int sum = 0;

    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
            sum += i;
    }

    printf("%d", sum);

    return 0;
}