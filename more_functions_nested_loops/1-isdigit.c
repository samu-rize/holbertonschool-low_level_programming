#include "main.h"
/**
 * _isdigit - check the code
 * @c: integer
 * Return: always ZERO
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
