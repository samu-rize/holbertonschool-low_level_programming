#include "main.h"
/**
 * print_last_digit - check the code
 * @n: - is integer to use
 * Return: always ZERO
 */
int print_last_digit(int n)
{
	int ld;

	if (n < 0)
		n *= -1;
	ld = n % 10;

	_putchar('0' + ld);
	return (ld);
}
