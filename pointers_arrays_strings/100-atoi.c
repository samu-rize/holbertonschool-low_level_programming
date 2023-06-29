#include "main.h"

/**
 * length - check the code
 * @s: integer
 * Return: integer.
*/
int length(char *s)
{
	int a = 0;

	while (s[a] != '\0')
		a++;
	return (a);
}


/**
 * negative - calculate how many (-)
 * in the given string
 * @c: The input string
 * Return: integer
 */

int negative(char *c)
{
	int i, l, neg = 0;

	l = length(c);
	for (i = 0; c[i] < l; i++)
	{
		if (c[i] == '-')
			neg++;
	}
	if (neg % 2 != 0)
		neg = -1;
	else
		neg = 1;
	return (neg);
}

/**
 * _atoi - Prints a string in reverse
 * @s: The input string
 * Return: char
 */

int _atoi(char *s)
{
	int i, rsl = 0, l, neg = negative(s);

	l = length(s);
	for (i = 0; s[i] < l; i++)
	{	
		if (s[i] >= '0' && s[i] <= '9')
			rsl = rsl * 10 + (s[i] -'0');
		else if (rsl > 0)
		{
			break;
		}
		
	}
	return (rsl * neg);
}
