#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - computes the length of a string using recursion
 * @s: The string to compute the length of
 *
 * This function recursively calculates the length of a string by
 * incrementing a counter variable 'i' each time it makes a recursive
 * call. It takes a string 's' as a parameter. If the character at the
 * current position is not the null terminator ('\0'), the function
 * adds 1 to the counter and makes a recursive call by moving the string
 * pointer to the next character. The recursive calls continue until
 * the null terminator is encountered, at which point the function returns
 * the final count.
 *
 * Return: The length of the string
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s > '\0')
	{
		i += _strlen_recursion(s + 1) + 1;
	}
	return (i);
}
