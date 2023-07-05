#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description: This program prints the alphabet in lowercase, followed by the
 * alphabet in uppercase. It uses two while loops to iterate over
 * the ASCII values of lowercase letters ('a' to 'z') and uppercase
 * letters ('A' to 'Z'). The putchar() function is used to print
 * each character, and the loops increment the variable 'i' to move
 * to the next character. Finally, a newline character is printed to
 * start a new line.
 *
 * Return: Always 0 (Success)
 */

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
