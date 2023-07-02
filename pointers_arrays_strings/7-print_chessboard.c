#include "main.h"
#include <stdio.h>

/**
 * print_chessboard -  locates a substring.
 * @a: array of chars
 * Return: Always 0.
 */

void print_chessboard(char (*a)[8])
{
	unsigned short int i, j;

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; a[i][j] != '\0'; j++)
		{
            if ((a[i][j] >= 'A' && a[i][j] <= 'Z') ||
            (a[i][j] >= 'a' && a[i][j] <= 'z') || (a[i][j] == ' '))
            {
                putchar (a[i][j]);
            }
		}
        putchar ('\n');
	}
	return (NULL);
}
