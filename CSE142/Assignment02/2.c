#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char pass[101];
        scanf("%s", pass);

        int score = 0;

        // Length calc and scoring
        int len;
        for (len = 0; pass[len] != '\0'; len++)
            ;

        if (len >= 8)
            score += 10;

        // Uppercase, lowercase, digit, and special character check and scoring
        int hasUppercase = 0, hasLowercase = 0, hasDigit = 0, hasSpecialChar = 0;
        int charHash[128] = {0};
        for (int i = 0; i < len; i++)
        {
            if (!hasUppercase && pass[i] >= 'A' && pass[i] <= 'Z')
                hasUppercase = 1;
            else if (!hasLowercase && pass[i] >= 'a' && pass[i] <= 'z')
                hasLowercase = 1;
            else if (!hasDigit && pass[i] >= '0' && pass[i] <= '1')
                hasDigit = 1;
            else if (!hasSpecialChar &&
                     (pass[i] == '!' ||
                      pass[i] == '@' ||
                      pass[i] == '#' ||
                      pass[i] == '$' ||
                      pass[i] == '%' ||
                      pass[i] == '^' ||
                      pass[i] == '&' ||
                      pass[i] == '*'))
                hasSpecialChar = 1;

            charHash[pass[i]]++;
        }

        if (hasUppercase)
            score += 5;
        if (hasLowercase)
            score += 5;
        if (hasDigit)
            score += 5;
        if (hasSpecialChar)
            score += 5;

        int hasDuplicate = 0;
        for (int i = 0; i < 128; i++)
        {
            if (charHash[i] > 1)
            {
                hasDuplicate = 1;
                break;
            }
        }
        if (!hasDuplicate)
            score += 10;

                // printf("%d\n", i);
    }

    return 0;
}