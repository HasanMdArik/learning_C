#include <stdio.h>

int main() {

    char ch;

    while ((ch = getchar()) != '\n') {
        printf("%d ", ch);
    }

    return 0;
}

