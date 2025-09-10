#include <stdio.h>

int reverseNumber(int n)
{
    int lastDigit;
    int res = 0;
    while (n > 0)
    {
        lastDigit = n % 10;
        res = res * 10 + lastDigit;
        n /= 10;
    }
    return res;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", reverseNumber(n));
    return 0;
}