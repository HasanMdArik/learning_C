#include <stdio.h>

int main () {
    int units;
    float rate;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    if (units <= 100)
        rate =5.50;
    else if (units <= 300)
        rate  = 6.75;
    else
        rate  = 8.2;

    float bill = rate*units;
    float surcharge = 0;

    if (bill > 2000.0){
        surcharge = (float)5/100 * bill;
    }

    printf("Units Consumed: %d\n", units);
    printf("Bill Before Surcharge: %.2f BDT\n", bill);
    if(surcharge>0.0){
        printf("Surcharge: %.2f BDT\n", surcharge);
    }
    printf("Total Bill: %.2f BDT\n", (bill+surcharge));

    return 0;
}

