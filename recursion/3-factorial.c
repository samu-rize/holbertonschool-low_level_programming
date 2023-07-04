#include "main.h"
#include <stdio.h>

/**
 * factorial - computes the factorial of a number using recursion
 * @n: The number to compute the factorial of
 *
 * This function recursively calculates the factorial of a number
 * by multiplying the number with the factorial of its preceding
 * number until it reaches 1.
 * It takes an integer 'n' as a parameter. If 'n' is greater than 1,
 * the function makes a recursive call to compute the factorial of
 * 'n-1' and multiplies it by 'n' to obtain the factorial of 'n'.
 * The recursive calls continue until 'n' is 1,
 * at which point the function returns the final factorial.
 *
 * Return: The factorial of the number
 */

int factorial(int n)
{
	int i = n;

	if (i > 1)
	{
		n = factorial(n - 1) * i;
	}
	if (i < -1)
	{
		n = factorial(n + 1) * i;
	}
	return (n);
}
