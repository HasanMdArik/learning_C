#include <stdio.h>

int isPrime(int N)
{
    int res = 1;
    for (int i = 2; i * i <= N; i++)
    {
        if (N % i == 0)
        {
            res = 0;
            break;
        }
    }

    return res;
}

int main()
{
    int N;
    scanf("%d", &N);

    int isSuperPrime = 1;
    while (N > 0)
    {
        if (!isPrime(N))
        {
            isSuperPrime = 0;
            break;
        }
        N /= 10;
    }

    if (isSuperPrime)
    {
        printf("Super Prime\n");
    }
    else
    {
        printf("Not Super Prime\n");
    }

    return 0;
}