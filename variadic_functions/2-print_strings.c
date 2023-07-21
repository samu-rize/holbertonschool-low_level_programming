#include "variadic_functions.h"

/**
 * print_strings - Prints a variable number of strings.
 * @separator: The string to be printed between strings.
 * @n: The number of strings to print.
 * @...: Variable arguments representing the strings to be printed.
 *
 * Description: This function takes a separator string, the number
 * of strings 'n', and a variable number of arguments representing
 * the strings to be printed. It prints the strings, separated by the
 * 'separator' string. If a string is NULL, "(nil)" is printed in its place.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	char *s;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(arg, char *);
		if (!s)
		{
			s = "(nil)";
		}
		if ((i < n - 1) && (separator))
		{
			printf("%s%s", s, separator);
		}
		else
		{
			printf("%s", s);
		}
	}
	putchar('\n');
}
