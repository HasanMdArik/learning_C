#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Write calls of printf that display a float variable x in the following formats.
    // (a) Exponential notation; left-justified in a field of size 8; one digit after the decimal point.
    printf("%-8.1e\n", 5.5);
    // (b) Exponential notation; right-justified in a field of size 10; six digits after the decimal point.
    printf("%10.8e\n", 5.5);
    // (c) Fixed decimal notation; left-justified in a field of size 8; three digits after the decimal point.
    printf("%-8.3f\n", 5.5);
    // (d) Fixed decimal notation; right-justified in a field of size 6; no digits after the decimal point.
    printf("%6.0f\n", 5.5);
    return 0;
}
