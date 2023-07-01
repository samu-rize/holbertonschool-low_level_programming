#include "main.h"
#include <stdio.h>

/**
 * _strspn - concatenates two strings.
 * @dest: array of chars
 * @src: array of chars
 * @n: integer
 * Return: Always 0.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned short int i, j, c;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				c++;
			}
		}
	}
	return (c);
}
