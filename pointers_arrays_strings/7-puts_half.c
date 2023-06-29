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
	int i, j, l;

	l = strlen(str);
	j = l / 2;
	if (l % 2 != 0)
		j += 1;
	for (i = j; i < l; i++)
		_putchar (str[i]);
	_putchar ('\n');
}
