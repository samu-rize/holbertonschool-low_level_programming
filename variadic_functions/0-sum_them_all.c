#include "variadic_functions.h"

/**
 * sum_them_all - Sums up a variable number of integers.
 * @n: The number of integers to sum.
 * @...: Variable arguments representing the integers to be summed.
 *
 * Description: This function takes the number of integers 'n' and a variable
 * number of arguments representing the integers to be summed.
 * It returns the sum of all the given integers.
 *
 * Return: The sum of the integers.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	int i, sum = 0;
	va_start (arg, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg (arg, int);
	}

	va_end (arg);
	return (sum);
}
