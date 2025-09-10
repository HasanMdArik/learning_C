#include <stdio.h>
#include <math.h>

int main()
{
    long long int hashmatArmy, opponentArmy;

    while (scanf("%lld %lld", &hashmatArmy, &opponentArmy) == 2)
    {
        printf("%lld\n", abs(opponentArmy - hashmatArmy));
    }

    return 0;
}