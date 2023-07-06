#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strcmp - Compares two strings.
 * @s1: Pointer to the first string.
 * @s2: Pointer to the second string.
 *
 * Description: This function compares the characters of the two strings
 * 's1' and 's2' until it finds a mismatch or reaches the end of one of
 * the strings.
 * It returns an integer value indicating the result of the comparison:
 * - If the strings are equal, it returns 0.
 * - If the first string is lexicographically less than the second string,
 * it returns a negative value.
 * - If the first string is lexicographically greater than the second string,
 * it returns a positive value.
 *
 * Return: An integer value indicating the result of the comparison.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
