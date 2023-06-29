#include "main.h"
/**
 * _atoi - Prints a string in reverse
 * @s: The input string
 * Return: char
 */
int _atoi(char *s)
{
	int i, rsl, sign;

	for (i = 0; s[i] != '\0'; i++)
	{	
		if (s[i] == '-')
			sign = -1;
		else
			sign = 1;
		rsl = rsl * 10 + s[i] -'0';
	}
	return (rsl * sign);
}
