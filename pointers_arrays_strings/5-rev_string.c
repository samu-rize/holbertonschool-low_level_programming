#include "main.h"
#include <string.h>
/**
 * print_rev - Prints a string in reverse
 * @s: The input string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0, j = 0;
	char c[10];

	i = strlen(s) - 1;
	while (s[i] >= 0)
	{
		c[j] = s[i];
		i--;
		j++;
	}
	s = c;
	return (s);
}
