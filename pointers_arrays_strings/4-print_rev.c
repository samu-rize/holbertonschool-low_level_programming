#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The input string.
 *
 * Description: This function takes a null-terminated string as input and
 * prints the characters of the string in reverse order.
 * It calculates the length of the string by iterating through it,
 * then iterates backwards from the last character to the first character,
 * printing each character.
 * Finally, it prints a newline character to end the line.
 *
 * Return: void.
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	for (i -= 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
