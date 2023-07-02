#include "main.h"
#include <string.h>

/**
 * puts_half - Prints the second half of a string.
 * @str: The input string.
 *
 * Description: This function takes a string `str` and prints the second half
 *              of the string. It calculates the length of the string using
 *              the `strlen` function and determines the starting index of the
 *              second half based on whether the length is even or odd. Then it
 *              iterates from the starting index to the end of the string and
 *              prints each character using the `_putchar` function. Finally,
 *              it prints a newline character.
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i, j, l;

	l = strlen(str);
	j = l / 2;
	if (l % 2 != 0)
		j += 1;
	for (i = j; i < l; i++)
		_putchar (str[i]);
	_putchar ('\n');
}
