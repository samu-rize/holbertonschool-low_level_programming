#include "main.h"
#include <stdio.h>

/**
 * print_chessboard -  prints the chessboard.
 * @a: array of chars representing the chessboard.
 * Return: Always 0.
 */

void print_chessboard(char (*a)[8])
{
	unsigned short int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; a[j][i] != '\0'; j++)
		{
			if ((a[j][i] >= 'A' && a[j][i] <= 'Z') ||
			(a[j][i] >= 'a' && a[j][i] <= 'z') ||
			(a[j][i] == ' '))
			{
				putchar (a[j][i]);
			}
		}
		putchar ('\n');
	}
}
