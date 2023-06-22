#include "main.h"
/**
 * print_last_digit - check the code
 * @n: - is integer to use
 * Return: always ZERO
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = (n % 10) * (-1);
		_putchar('0' + n);
		return (n);
	}
	else
	{
		n = n % 10;
		_putchar('0' + n);
		return (n);
	}
}
