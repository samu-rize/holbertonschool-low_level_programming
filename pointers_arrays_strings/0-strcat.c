#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;

	while (*dest)
	{
		i++;
	}
	while (*src)
	{
		dest[i] = *src; 
		i++;
	}
	return (dest);
}
