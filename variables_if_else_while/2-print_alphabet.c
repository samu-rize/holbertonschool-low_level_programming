#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description: This program prints the alphabet in lowercase. It uses a while
 * loop to iterate over the ASCII values of lowercase letters, from
 * 'a' to 'z'. The putchar() function is used to print each character
 * and the loop increments the variable 'i' to move to the next
 * character. Finally, a newline character is printed to start a new line.
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
	putchar('\n');
	return (0);
}
