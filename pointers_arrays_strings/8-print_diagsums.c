#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  prints the chessboard.
 * @a: array of chars representing the chessboard.
 * @s: size of the array.
 * Return: Always 0.
 */

void print_diagsums(int *a, int s)
{
	int i, j = s - 1, n = 0, m = 0;

	for (i = 0; i < s; i++)
	{
		n += *(a + i * s + i);
	}
	for (i = 0; i < s && j >= 0; i++, j--)
	{
		m += *(a + i * s + j);
	}
	printf("%d, %d\n", n, m);
}
