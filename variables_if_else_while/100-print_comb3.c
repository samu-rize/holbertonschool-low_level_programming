#include <stdio.h>

/**
 * main - Program that prints all possible combinations of single-digit numbers
 *
 * Description:
 * This program prints all possible combinations of
 * single-digit numbers from 0 to 9.
 * It uses nested loops to generate and print the combinations.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0, j = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
		{
			if (j > i)
			{
				if (i + j != 1)
				{
					putchar(',');
					putchar(' ');
				}
				putchar(i + '0');
				putchar(j + '0');
			}
		}
	}
	return (0);
}
