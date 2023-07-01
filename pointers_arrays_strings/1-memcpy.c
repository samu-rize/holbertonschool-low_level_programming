#include "main.h"
#include <stdio.h>

/**
 * _memcpy - prints buffer in hexa
 * @dest: a pointer to the memory area to be filled.
 * @src: the constant byte to fill the memory with.
 * @n: the number of bytes to be filled.
 *
 * Return: char.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*dest = src[i];
		i++;
	}
	return (dest);
}
