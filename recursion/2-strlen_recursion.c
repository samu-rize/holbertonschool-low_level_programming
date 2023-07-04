#include "main.h"
#include <stdio.h>

/**
 * count - recursively counts the length of a string
 * @s: The string to be counted
 * @i: The index of the character to be checked
 *
 * This function recursively counts the length of a string by iterating over
 * each character until it reaches the null terminator. It takes a string 's'
 * and an index 'i' as parameters. If the character at the current index is the
 * null terminator ('\0'), it returns the total count of characters encountered
 * so far. Otherwise, it increments the index and makes a recursive call to
 * continue counting the characters.
 *
 * Return: The length of the string
 */

int count(char *s, int i)
{
	if (s[i] == '\0')
	{
		printf (i + 1);
		return (0);
	}
	if (s[i] != '\0')
	{
		i++;
		count(s, i);
	}
	return (0);
}

/**
 * _strlen_recursion - computes the length of a string using recursion
 * @s: The string to compute the length of
 *
 * This function serves as the entry point to compute the length of a string
 * using recursion. It initializes the index 'i' to 0 and calls the 'count'
 * function with the given string 's' and initial index 'i'. The 'count'
 * function recursively counts the length of the string.
 *
 * Return: The length of the string
 */

int _strlen_recursion(char *s)
{
	int i;

	i = 0;
	count(s, i);
	return (0);
}
