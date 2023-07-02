#include "main.h"
#include <string.h>

/**
 * puts2 - Prints every other character of a string.
 * @str: The input string.
 *
 * Description: This function prints every other character of the string `str`,
 *              starting from the first character. It does not modify the original
 *              string and does not return any value.
 *
 * Return: void.
 */

void puts2(char *str)
{
	int i, j;

	j = strlen(str);

	for (i = 0; i < j; i += 2)
	{
		_putchar (str[i]);
	}
	_putchar ('\n');
}
