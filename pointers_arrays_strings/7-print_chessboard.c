#include "main.h"
#include <stdio.h>

/**
 * print_chessboard -  prints the chessboard.
 * @a: array of chars representing the chessboard.
 * Return: Always 0.
 */

void print_chessboard(char (*a)[8])
{
	unsigned short int i;

	while (*a)
	{
		for (i = 0; i < 8; i++)
		{
			if ((*a[i] >= 'A' && *a[i] <= 'Z') ||
			(*a[i] >= 'a' && *a[i] <= 'z') ||
			(*a[i] == ' '))
			{
				putchar (*a[i]);
			}
		}
		putchar ('\n');
	a++;
	}
}
