#include <stdio.h>

int main()
{
    int tr_val;
    printf("Enter value of trade: ");
    scanf("%d", &tr_val);

    float commision;

    if (tr_val < 2500)
    {
        commision = 30 + tr_val * 1.7 / 100;
        if (commision < 39)
        {
            commision = 39.0f;
        }
    }
    else if (tr_val <= 6250)
        commision = 56 + tr_val * .66 / 100;
    else if (tr_val <= 20000)
        commision = 76 + tr_val * .34 / 100;
    else if (tr_val <= 50000)
        commision = 100 + tr_val * .22 / 100;
    else if (tr_val <= 500000)
        commision = 155 + tr_val * .11 / 100;
    else
        commision = 155 + tr_val * .09 / 100;

    printf("Commision: $%.2f\n", commision);

    return 0;
};