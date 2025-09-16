#include <stdio.h>

#define SIZE 100


int main() {


    int a[SIZE];
    int b[SIZE];
    int c[SIZE];

    for (int i =0; i<SIZE; i++) {
        a[i] = i+1;
    }

    int bIdx = 0, cIdx = 0;
    for (int i =0; i< SIZE; i++) {
        if (a[i]%3==0){
            b[bIdx] = a[i];
            bIdx++;
        } else {
            c[cIdx] = a[i];
            cIdx++;
        }
    }

    int max1=b[0], max2=b[0], max3=b[0];
    for (int i =1; i < bIdx; i++) {
        if (b[i]>max1)
            max1 = b[i];
    }
    for (int i =1; i < bIdx; i++) {
        if (b[i]>max2 && b[i] != max1)
            max2 = b[i];
    }
    for (int i =1; i < bIdx; i++) {
        if (b[i]>max3 && b[i] != max1 && b[i] != max2)
            max3 = b[i];
    }


    for (int i =0; i<SIZE; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    for (int i =0; i<bIdx; i++){
        printf("%d ", b[i]);
    }
    printf("\n");
    for (int i =0; i<cIdx; i++){
        printf("%d ", c[i]);
    }
    printf("\n");
    printf("Three largest values of b array: %d, %d, %d\n", max1, max2, max3);

    return 0;
}
