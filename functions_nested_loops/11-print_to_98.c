#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - check the code
 * @n: integer
 * Return: always ZERO
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
		for (i = n; i > 97; i++)
		{
			if (i != 98)
				printf("%d, ", i);
			if (i > 98)
				printf("98\n");
		}
	}
}
