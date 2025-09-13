#include <stdio.h>
#include <math.h>

int main()
{
    float marks;
    scanf("%f", &marks);

    int marksInt = round(marks);

    switch (marksInt / 10)
    {
    case 9:
    case 8:
        printf("A+");
        break;
    case 7:
        printf("A");
        break;
    case 6:
        printf("A-");
        break;
    case 5:
        printf("B");
        break;
    case 4:
        printf("C");
        break;

    default:
        if (marksInt < 33)
            printf("F");
        else
            printf("D");
        break;
    }

    return 0;
}