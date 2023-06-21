#include <stdio.h>

/**
 * main - program that prints all the numbers of base 16 in lowercase, followed by a new line.
 * Return: always ZERO
**/
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
