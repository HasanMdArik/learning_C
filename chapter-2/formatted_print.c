#include <stdio.h>

int main(void)
{
    int height;
    height = 4;

    printf("Height: %d\n", height);

    // Formatting floating point numbers...
    float profit = 2150.48f;
    printf("Profit: $%f\n", profit);   // till 6th decimal point
    printf("Profit: $%.2f\n", profit); // till 2nd decimal point
    printf("Profit: $%.8f\n", profit); // till 8th decimal point

    return 0;
}