#include "main.h"

/**
 * prime - checks if a number is prime recursively
 * @n: The number to check for primality
 * @i: The current divisor to check
 *
 * This recursive function checks if a given number 'n' is prime by iterating
 * from 2 to 'n' and checking if 'n' is divisible evenly by any number.
 * If a divisor is found, the function returns 0, indicating that
 * 'n' is not prime.
 * Otherwise, if the function reaches 'n' without finding any divisors,
 * it returns 1, indicating that 'n' is prime.
 *
 * Return: 1 if 'n' is prime, 0 otherwise.
 */

int prime(int n, int i)
{
	if (n == i)
	{
		return (1);
	}
	else if ((!(n % i)) || (n < 0) || (n == 1))
	{
		return (0);
	}
	else
	{
		return (prime(n, i + 1));
	}
}

/**
 * is_prime_number - checks if a number is prime
 * @n: The number to check
 *
 * This function acts as a wrapper for the internal recursive function prime.
 * It calls prime with the initial value of 'i' set to 2 to start the recursion
 * process. The function returns the result obtained from prime.
 *
 * Return: 1 if 'n' is prime, 0 otherwise.
 */

int is_prime_number(int n)
{
	return (prime(n, 2));
}
