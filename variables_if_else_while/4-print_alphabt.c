#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description: This program prints the alphabet in lowercase, excluding the
 * letters 'q' and 'e'. It uses a while loop to iterate over the
 * ASCII values of lowercase letters ('a' to 'z'). Inside the loop,
 * there is an if statement that checks if the current letter is 'e'
 * or 'q'. If it is, the loop increments the variable 'i' to skip
 * these letters. Otherwise, it uses the putchar() function to print
 * the current letter, and then increments 'i' to move to the next
 * letter. Finally, a newline character is printed to start a new line.
 *
 * Return: Always 0 (Success)
 */

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
