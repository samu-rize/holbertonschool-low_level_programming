#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase, followed by a new line
 * Print all the letters except q and e
 * Return: always ZERO
**/
int main(void)
{
	int i;

	i = 97;
	while (i < 123)
	{
		if (i == 101 || i == 113)
		{
			i++;
		}
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
