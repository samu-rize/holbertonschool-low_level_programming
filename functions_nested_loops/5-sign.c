# include "main.h"
/**
 * print_sign - check the code
 * @n: - is integer to use
 * Return: always ZERO
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
