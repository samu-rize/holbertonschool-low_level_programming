#include "main.h"

/**
 * _pow_recursion - calculates the power of a number recursively
 * @x: The base number
 * @y: The exponent
 * This function calculates the value of 'x' raised
 * to the power of 'y' recursively.
 * It checks for special cases such as a negative exponent where it returns -1,
 * and the base case of y being 0 where it returns 1. For positive exponents,
 * it recursively multiplies the base number by itself (x * x) and decrements
 * the exponent until it reaches the base case.
 * Return: The result of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
