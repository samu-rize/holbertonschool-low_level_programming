#include "variadic_functions.h"

/**
 * print_numbers - Prints a variable number of integers.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers to print.
 * @...: Variable arguments representing the integers to be printed.
 *
 * Description: This function takes a separator string, the number
 * of integers 'n', and a variable number of arguments representing
 * the integers to be printed.
 * It prints the integers, separated by the 'separator' string.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
		{
			printf("%d%s", va_arg(arg, int), separator);
		}
		else
		{
			printf("%d\n", n);
		}
	}
}
