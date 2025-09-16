#include <stdio.h>

int isSubstrPalindromic(char str[], int start, int end);

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

        // Duplicate checking
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

        int hasPalindromicSubstr = 0;
        for (int i = 0; i < len - 2; i++)
        {
            for (int j = len - 1; j >= i + 2; j--)
            {
                if (isSubstrPalindromic(pass, i, j))
                {
                    hasPalindromicSubstr = 1;
                    break;
                }
            }
        }

        if (hasPalindromicSubstr)
            score += 15;

        // Common patterns checking
        // Patterns include 123, abc, password
        int hasCommonPatterns = 0;
        // Checking if there is 123
        for (int i = 2; i < len; i++)
        {
            if (pass[i - 2] == '1' && pass[i - 1] == '2' && pass[i] == '3')
            {
                hasCommonPatterns = 1;
                break;
            }
        }

        // Checking if there is abc
        if (!hasCommonPatterns)
        {
            for (int i = 2; i < len; i++)
            {
                if (pass[i - 2] == 'a' && pass[i - 1] == 'b' && pass[i] == 'c')
                {
                    hasCommonPatterns = 1;
                    break;
                }
            }
        }

        // Checking if there is password
        if (!hasCommonPatterns)
        {
            for (int i = 7; i < len; i++)
            {
                if (pass[i - 7] == 'p' &&
                    pass[i - 6] == 'a' &&
                    pass[i - 5] == 's' &&
                    pass[i - 4] == 's' &&
                    pass[i - 3] == 'w' &&
                    pass[i - 2] == 'o' &&
                    pass[i - 1] == 'r' &&
                    pass[i] == 'd')
                {
                    hasCommonPatterns = 1;
                    break;
                }
            }
        }

        if (!hasCommonPatterns)
            score += 20;

        if (score >= 60)
            printf("ADMIN %d\n", score);
        else if (score >= 40)
            printf("USER %d\n", score);
        else if (score >= 20)
            printf("GUEST %d\n", score);
        else
            printf("DENIED %d\n", score);
    }

    return 0;
}

int isSubstrPalindromic(char str[], int start, int end)
{
    int l = start, r = end;
    while (l < r)
    {
        if (str[l] != str[r])
        {
            return 0;
        }
        l++;
        r--;
    }
    return 1;
}