#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints numbers from 1 to 100.
 *              For multiples of 3, it prints "Fizz".
 *              For multiples of 5, it prints "Buzz".
 *              For multiples of both 3 and 5, it prints "FizzBuzz".
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i < 100)
		{
			putchar(' ');
		}
		else
		{
			putchar('\n');
		}
	}
	return (0);
}
