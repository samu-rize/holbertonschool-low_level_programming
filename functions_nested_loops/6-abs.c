#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @n: The integer to compute the absolute value of
 *
 * Description: This function takes an integer and computes its absolute value.
 * If the integer is positive or zero, it returns the integer itself.
 * If the integer is negative, it returns the negation of the integer.
 *
 * Return: The absolute value of the integer
 */

int _abs(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}
