#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase, 10 times
 *
 * Description: This function prints the lowercase alphabet 10 times, each on a new line
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int j;

	for (j = 0; j < 10; j++)
	{
		int i;

		for (i = 97; i <= 122 ; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
