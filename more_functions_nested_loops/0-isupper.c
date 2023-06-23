#include "main.h"
/**
 * _isupper - check the code
 * @c: integer
 * Return: always ZERO
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
