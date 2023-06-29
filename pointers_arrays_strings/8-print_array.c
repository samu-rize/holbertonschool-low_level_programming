#include "main.h"
#include <stdio.h>
/**
 * print_array - Prints a string in reverse
 * @a: The input string
 * @n: The input string
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i == n - 1)
		{
			break;
		}
		printf(", ");
	}
	putchar('\n');
}
