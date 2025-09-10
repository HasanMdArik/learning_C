#include <stdio.h>

int isPrime(int n)
{
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

int kSmooth(int n, int k)
{
    int res = 1;
    for (int i = 2; i * i < n; i++)
    {
        if (n % i == 0)
        {
            if (i > k && isPrime(i) || (n / i) > k && isPrime(n / i))
            {
                res = 0;
                break;
            }
        }
    }
    return res;
}

int main()
{
    int n, k;
    scanf("%d%d", &n, &k);
    printf("%d", kSmooth(n, k));
    return 0;
}