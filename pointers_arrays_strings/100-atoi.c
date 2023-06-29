#include "main.h"

/**
 * negative - calculate how many (-)
 * in the given string
 * @c: The input string
 * Return: integer
 */

int negative(char *c)
{
	int i, neg = 0;

	for (i = 0; c[i] != '0'; i++)
	{
		if (c[i] == '-')
			neg += 1;
	}
	if (neg % 2)
		neg = 1;
	else
		neg = -1;
	return (neg);
}

/**
 * _atoi - Prints a string in reverse
 * @s: The input string
 * Return: char
 */

int _atoi(char *s)
{
	int i, rsl, neg;

	rsl = 0;
	neg = negative(s);
	for (i = 0; s[i] != '\0'; i++)
	{	
		if (s[i] >= '0' && s[i] <= '9')
			rsl *= 10 + s[i] -'0';
	}
	return (rsl * neg);
}
