#include <stdio.h>

/**
 * main - program that prints the lowercase alphabet in reverse, followed by a new line.
 * Return: always ZERO
**/
int main(void)
{
	char i;

	i = 122;
	while (i > 96)
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
