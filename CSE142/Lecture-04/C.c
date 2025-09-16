#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);

    if (n == 0)
        printf("Palindrome\n");
    else
    {
        // reversing the number
        int powOf10 = log10(n);
        int rev = 0;
        int clone = n;
        while (clone > 0)
        {
            rev += (clone % 10) * pow(10, powOf10);
            powOf10--;
            clone /= 10;
        }

        if (rev == n)
        {
            printf("Palindrome");
        }
        else
        {
            printf("Not Palindrome");
        }
    }

    return 0;
}