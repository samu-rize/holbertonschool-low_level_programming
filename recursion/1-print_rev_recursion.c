#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse using recursion
 * @s: The string to print in reverse
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{}
	for (; s[i] >= 0; i--)
	{
		_putchar(s[i]);
	}
}
