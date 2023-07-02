#include "main.h"

/**
 * print_last_digit - Prints the last digit of an integer
 * @n: The integer to extract the last digit from
 *
 * Description: This function takes an integer and prints its last digit.
 * If the integer is negative, it converts it to a positive number and prints
 * the corresponding last digit. It then returns the last digit.
 * If the integer is positive or zero, it simply prints and returns the last digit.
 *
 * Return: The last digit of the integer
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		n = (n % 10) * (-1);
		_putchar('0' + n);
		return (n);
	}
	else
	{
		n = n % 10;
		_putchar('0' + n);
		return (n);
	}
}
