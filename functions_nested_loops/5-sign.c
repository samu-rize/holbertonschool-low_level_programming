# include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: The number to be checked
 *
 * Description: This function prints the sign of a given number and returns
 * 1 if the number is positive, -1 if the number is negative, and 0 if the
 * number is zero.
 *
 * Return: 1 if number is positive, -1 if number is negative, 0 if number is
 * zero.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar (43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar (48);
		return (0);
	}
	else
	{
		_putchar (45);
		return (-1);
	}

	{
		return (0);
	}
}
