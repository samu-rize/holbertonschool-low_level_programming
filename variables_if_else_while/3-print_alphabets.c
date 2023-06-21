#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase, and then in uppercase, followed by a new line
 * Return: always ZERO
**/
int main(void)
{
	int i;

	i = 97;
	while (i < 123)
	{
		putchar(i);
		i++;
	}
	i = 65;
	while (i < 91)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
