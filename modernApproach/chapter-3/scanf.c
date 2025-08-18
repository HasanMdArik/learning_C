#include <stdio.h>

int main(int argc, char const *argv[])
{
    // int i, j;
    // float x, y;

    // scanf("%d%d%f%f", &i, &j, &x, &y); // let input be, 1 -20 .3 -4.0e3

    // printf("%d %d %f %f\n", i, j, x, y); // Output will be 1 -20 0.300000 -4000.000000

    // As it searches for the beginning of a number, scanf ignores white-space
    // characters (the space, horizontal and vertical tab, form-feed, and new-line charac-
    // ters).

    // When asked to read an integer, scanf first searches for a digit, a plus
    // sign, or a minus sign; it then reads digits until it reaches a nondigit. When asked to
    // read a floating-point number, scanf looks for
    //  a plus or minus sign (optional), followed by
    //  a series of digits (possibly containing a decimal point), followed by
    //  an exponent (optional). An exponent consists of the letter e (or E), an optional
    //      sign, and one or more digits.
    //
    // The %e, %f, and %g conversions are interchangeable when used with scanf; all
    // three follow the same rules for recognizing a floating-point number.

    int a, b;
    scanf("%d/%d", &a, &b);
    printf("%d %d\n", a, b);

    return 0;
}
