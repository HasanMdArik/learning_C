#include <stdio.h>
#include <math.h>

int numberOfPrimeNums(int arr[], int l, int r);
int numberOfPerfectSquares(int arr[], int l, int r);
int numberOfNumsWithEvenDigitSum(int arr[], int l, int r);
int numberOfPalindromes(int arr[], int l, int r);
int numberOfNumsDivisibleByDigitSum(int arr[], int l, int r);

int main()
{
    int n, q;
    scanf("%d%d", &n, &q);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    char cmd[8];
    while (q--)
    {
        scanf("%s", cmd);

        if (cmd[0] == 'U')
        {
            int i, v;
            scanf("%d %d", &i, &v);
            arr[i - 1] = v;
        }
        else
        {
            int l, r, c;
            scanf("%d%d%d", &l, &r, &c);

            int res;
            switch (c)
            {
            case 1:
                res = numberOfPrimeNums(arr, l - 1, r - 1);
                break;
            case 2:
                res = numberOfPerfectSquares(arr, l - 1, r - 1);
                break;
            case 3:
                res = numberOfNumsWithEvenDigitSum(arr, l - 1, r - 1);
                break;
            case 4:
                res = numberOfPalindromes(arr, l - 1, r - 1);
                break;
            case 5:
                res = numberOfNumsDivisibleByDigitSum(arr, l - 1, r - 1);
                break;
            }

            printf("%d\n", res);
        }
    }

    return 0;
}

int numberOfPrimeNums(int arr[], int l, int r)
{
    int primeNums = 0, num, isPrime;
    for (int i = l; i <= r; i++)
    {
        num = arr[i];

        if (num < 2)
        {
            continue;
        }
        else if (num == 2)
        {
            primeNums++;
            continue;
        }

        isPrime = 1;
        for (int j = 3; j * j < num; j++)
        {
            if (num % j)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
            primeNums++;
    }

    return primeNums;
}
int numberOfPerfectSquares(int arr[], int l, int r)
{
    int perfectSquares = 0;

    for (int i = l; i <= r; i++)
    {
        int root = sqrt(arr[i]);
        if (root * root == arr[i])
            perfectSquares++;
    }

    return perfectSquares;
}
int numberOfNumsWithEvenDigitSum(int arr[], int l, int r)
{
    int res = 0, num, sum;

    for (int i = l; i <= r; i++)
    {
        num = arr[i];

        sum = 0;
        while (num > 0)
        {
            sum += num % 10;
            num /= 10;
        }

        if (sum % 2 == 0)
        {
            res++;
        }
    }

    return res;
}
int numberOfPalindromes(int arr[], int l, int r)
{
    int palindromes = 0, num, revNum;

    for (int i = l; i <= r; i++)
    {
        num = arr[i];
        revNum = 0;
        while (num > 0)
        {
            revNum = revNum * 10 + num % 10;
            num /= 10;
        }

        if (revNum == arr[i])
        {
            palindromes++;
        }
    }
    return palindromes;
}
int numberOfNumsDivisibleByDigitSum(int arr[], int l, int r)
{
    int res = 0, num, sum;

    for (int i = l; i <= r; i++)
    {
        num = arr[i];

        sum = 0;
        while (num > 0)
        {
            sum += num % 10;
            num /= 10;
        }

        if (arr[i] % sum == 0)
        {
            res++;
        }
    }

    return res;
}