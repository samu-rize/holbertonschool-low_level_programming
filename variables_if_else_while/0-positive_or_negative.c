#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description: This program generates a random number and determines whether
 *              it is positive, negative, or zero. It uses the srand function
 *              to seed the random number generator with the current time. The
 *              rand function is then used to generate a random number, which
 *              is stored in the variable 'n'. The program then uses if-else
 *              statements to check the value of 'n' and prints the
 *              corresponding message.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
