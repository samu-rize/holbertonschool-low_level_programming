#include "main.h"

/**
 * _atoi - string to an integer
 * @s: array of chars
 * Return: integer
*/

int _atoi(char *s)
{
	unsigned int rsl = 0, sign = 1;

	while (*s)
	{
		if (*s >= '0' && *s <= '9')
			rsl = (rsl * 10) + (*s - '0');
		else if (*s == 45)
			sign = sign * -1;
		else if (rsl > 0)
			break;
		s++;
	}
	return (rsl * sign);
}
