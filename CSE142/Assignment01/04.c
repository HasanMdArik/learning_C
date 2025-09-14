#include <stdio.h>

int main() {
    float num1, num2;
    char op;
    printf("1st number: ");
    scanf("%f", &num1);
    printf("2nd number: ");
    scanf("%f", &num2);
    printf("Operator: ");
    getchar(); // to ignore the redundant whitespace character
    op = getchar();

    float result;

    switch (op) {
    case '+':
            result = num1+num2;
            break;
    case '-':
            result = num1 - num2;
            break;
    case '*':
            result  = num1 * num2;
            break;
    case '/':
            if (num2 ==0) {
                 printf("Error: Division by zero\n");
                 return 0;
            }
            result = num1 / num2;
            break;
    }

    printf("Result: %f\n", result);
    return 0;
}


