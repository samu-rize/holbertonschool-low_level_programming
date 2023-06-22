#include "main.h"

int print_last_digit(int n)
{
    int lastDigit;

    if (n < 0) {
        n *= -1;
    }
    lastDigit = n % 10;

    _putchar('0' + lastDigit);
    
    return (lastDigit);
}