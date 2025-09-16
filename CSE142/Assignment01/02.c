#include <stdio.h>

int min(int a, int b){
    if (a<b)
        return a;
    return b;
}

int main() {
    int m1, m2, m3, m4;
    printf("Input the mark of 1st CT: ");
    scanf("%d", &m1);
    printf("Input the mark of 2nd CT: ");
    scanf("%d", &m2);
    printf("Input the mark of 3rd CT: ");
    scanf("%d", &m3);
    printf("Input the mark of 4th CT: ");
    scanf("%d", &m4);

    float avg;
    avg = (float)(m1 + m2 + m3 + m4 - min(min(m1,m2), min(m3,m4))) / 3;
    printf("Average: %f", avg);
    return 0;
}



