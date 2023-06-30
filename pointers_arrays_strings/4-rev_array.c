#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array of integers
 * @n: number of elements
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, j, s;

	i = 0;
	j = n - 1;
	while (i < j)
	{
		s = a[i];
		a[i] = a[j];
		a[j] = s;
	}
}
