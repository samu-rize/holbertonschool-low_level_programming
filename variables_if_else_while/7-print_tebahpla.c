#include <stdio.h>

/**
 * main - program prints the alphabet in lowercase, followed by a new line.
 * Return: always ZERO
**/
int main(void)
{
	int i;

	i = 122;
	while (i > 96)
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
