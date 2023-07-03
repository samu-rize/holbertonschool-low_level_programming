#include <stdio.h>

/**
 * main - Program that prints all the numbers of base 16
 * in lowercase, followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	i = 48;
	while (i < 103)
	{
		if (i == 58)
		{
			i = 97;
		}
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
