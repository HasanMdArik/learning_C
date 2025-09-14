#include <stdio.h>

int main()
{
    long long int n;
    scanf("%lld", &n);
    if (n < 0)
        n = -n;

    int freq[10] = {0};

    if (n == 0)
    {
        freq[0]++;
    }
    else
    {
        while (n > 0)
        {
            freq[(n % 10)]++;
            n /= 10;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", freq[i]);
    }

    return 0;
}