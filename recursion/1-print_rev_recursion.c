#include "main.h"
#include <string.h>

/**
 * print - recursively prints a string in reverse
 * @s: The string to be printed
 * @i: The index of the character to be printed
 *
 * Return: void
 */

int print(char *s, int i)
{
	i--;
	if (i < 0)
	{
		return (0);
	}
	_putchar(s[i]);
	if (i >= 0)
	{
		print(s, i);
	}
	return (0);
}

/**
 * _print_rev_recursion - prints a string in reverse using recursion
 * @s: The string to print in reverse
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	int i;

	i = strlen(s);
	print(s, i);
}
