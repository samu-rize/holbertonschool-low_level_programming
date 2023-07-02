#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints an array of integers.
 * @a: The input array of integers.
 * @n: The number of elements in the array.
 *
 * Description: This function takes an array of integers `a` and the number of
 *              elements `n` and prints the elements of the array. It iterates
 *              over the elements of the array and uses the `printf` function
 *              to print each element. It also adds a comma and space between
 *              the elements except for the last element. Finally, it prints a
 *              newline character.
 *
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
