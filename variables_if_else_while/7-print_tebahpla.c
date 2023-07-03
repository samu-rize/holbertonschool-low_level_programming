#include <stdio.h>

/**
 * main - Program that prints the lowercase alphabet
 * in reverse, followed by a new line
 *
 * Return: Always 0 (Success)
 */

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
