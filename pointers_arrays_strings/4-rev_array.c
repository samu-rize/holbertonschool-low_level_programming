#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: Array of integers.
 * @n: Number of elements in the array.
 *
 * Description: This function takes an array of integers and the number of
 * elements in the array as input.
 * It reverses the order of the elements in the array.
 * The function uses two indices, `i` and `j`, starting from the first
 * and last elements of the array respectively, and swaps the elements
 * until `i` surpasses `j`.
 * This effectively reverses the order of the elements in the array.
 *
 * Return: void.
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
		i++;
		j--;
	}
}
