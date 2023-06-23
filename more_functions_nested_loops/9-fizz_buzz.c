#include <stdio.h>
/**
 * main - check the code
 * Return: always ZERO
 */
int main(void)
{
	int i;

	for (i = 0; i < 101; ++i)
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
			putchar(i);
		}
		if (i < 100)
		{
			putchar(' ');
		}
	}
	return (0);
}
