#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints all integers from n to 98
 * @n: Starting integer
 *
 * Description: This function takes an integer n and prints all the integers
 * from n to 98, either in increasing or decreasing order.
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i < 99; i++)
		{
			if (i != 98)
				printf("%d, ", i);
			else
				printf("98\n");
		}
	}
	else if (n == 98)
		printf("98\n");
	else
	{
		for (i = n; i > 97; i--)
		{
			if (i != 98)
				printf("%d, ", i);
			else
				printf("98\n");
		}
	}
}
