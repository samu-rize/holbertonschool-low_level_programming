#include "main.h"
#include <string.h>
/**
 * puts_half - Prints a string in reverse
 * @str: The input string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, j;

	j = strlen(str);
	if (j % 2 != 0)
		j += 1;
	for (i = j / 2; i < j; ++i)
		_putchar (str[i]);
	_putchar ('\n');
}
