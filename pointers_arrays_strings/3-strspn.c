#include "main.h"
#include <stdio.h>

/**
 * _strspn - concatenates two strings.
 * @s: array of chars
 * @accept: array of chars
 * Return: Always 0.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned short int i, j, c;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (!((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')))
		{
			break;
		}
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
