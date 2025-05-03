#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Conversion specification
    // Format: %m.pX or %-m.pX
    // Also: %mX, %-mX, %.pX

    // The minimum field width, m, specifies the minimum number of characters to
    // print. If the value to be printed requires fewer than m characters, the value is right-
    // justified within the field.

    // The meaning of the precision, p, isn’t as easily described, since it depends on
    // the choice of X, the conversion specifier. X indicates which conversion should be
    // applied to the value before it’s printed. The most common conversion specifiers for
    // numbers are:

    // d — Displays an integer in decimal (base 10) form. p indicates the minimum
    // number of digits to display (extra zeros are added to the beginning of the
    // number if necessary);
    int x = 10;
    printf("%.10d\n", x); // 0000000010

    // e — Displays a floating-point number in exponential format (scientific notation).
    // p indicates how many digits should appear after the decimal point (the
    // default is 6). If p is 0, the decimal point is not displayed.

    float y = 1234.678;
    printf("%e\n", y);   // 1.234678e+03
    printf("%.3e\n", y); // 1.235e+03

    // f — Displays a floating-point number in “fixed decimal” format, without an
    // exponent. p has the same meaning as for the e specifier.
    printf("%f\n", y);   // 1234.677979
    printf("%.3f\n", y); // 1234.678

    // g — Displays a floating-point number in either exponential format or fixed
    // decimal format, depending on the number’s size. p indicates the maximum
    // number of significant digits (not digits after the decimal point) to be dis-
    // played. Unlike the f conversion, the g conversion won’t show trailing zeros.
    // Furthermore, if the value to be printed has no digits after the decimal point, g
    // doesn’t display the decimal point.

    float z = 0.32;
    printf("%g\n", y);   // 1234.68
    printf("%g\n", z);   // 0.32
    printf("%.2g\n", y); // 1.2e+03
    printf("%.2g\n", z); // 0.32

    /* Escape Sequences */
    // \a Alert
    // \b Backspace
    // \n New line
    // \t Horizontal tab
    printf("\a");

    printf("\"Hello!\"\n"); // "Hello"

    return 0;
}
