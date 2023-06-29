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
		i = (j / 2) + 1;
	for (i += 1; i < j; i++)
		_putchar (str[i]);
	_putchar ('\n');
}
