#include <stdio.h>

/**
 * main - Program that prints all possible combinations of single-digit numbers
 *
 * Description:
 * This program prints all possible combinations of single-digit numbers from 0 to 9.
 * It uses nested loops to generate and print the combinations.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j;

	for (int i = 0; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			if (j > i)
			{
				putchar(i);
				putchar(j);
				putchar(',');
				putchar(' ');
			}	
		}
	}
	return (0);
}
