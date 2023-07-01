#include "main.h"
#include <stdio.h>

/**
 * _memset - prints buffer in hexa
 * @s: a pointer to the memory area to be filled.
 * @b: the constant byte to fill the memory with.
 * @n: the number of bytes to be filled.
 *
 * Return: char.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (i < n)
		{
			s[i] = b;
		}
	}
	return (s);
}
