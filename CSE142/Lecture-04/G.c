#include <stdio.h>
#include <math.h>

int isArmstrong(int n)
{
    int clone = n;
    int sum = 0;
    int numOfDigits = log10(n) + 1;

    int digit;
    while (clone > 0)
    {
        digit = clone % 10;
        sum += pow(digit, numOfDigits);
        clone /= 10;
    }
    if (sum == n)
        return 1;
    return 0;
}

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i < n; i++)
    {
        if (isArmstrong(i))
            printf("%d ", i);
    }

    return 0;
}