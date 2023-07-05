#include "main.h"

/**
 * _sqrt - calculates the square root of a number recursively
 * @n: The number for which to calculate the square root
 * @i: The current value to check for the square root
 *
 * This recursive function calculates the square root of the given number 'n'
 * by checking if the square of 'i' equals 'n'. If a match is found, 'i' is the
 * square root of 'n' and is returned. If 'i' becomes greater than 'n' or 'n'
 * is negative, indicating that a square root does not exist, -1 is returned.
 * Otherwise, the function calls itself recursively with the next value of 'i'.
 *
 * Return: The square root of 'n' if it exists, otherwise -1.
 */

int _sqrt(int n, int i)
{
	if (n == i * i)
	{
		return (i);
	}
	else if ((i > n) || (n < 0))
	{
		return (-1);
	}
	else
	{
		return (_sqrt(n, i + 1));
	}
}

/**
 * _sqrt_recursion - calculates the square root of a number recursively
 * @n: The number for which to calculate the square root
 *
 * This function acts as a wrapper for the internal recursive function _sqrt.
 * It calls _sqrt with the initial value of 'i' set to 0 to start the recursion
 * process. The function returns the result obtained from _sqrt.
 *
 * Return: The square root of 'n' if it exists, otherwise -1.
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 0));
}
