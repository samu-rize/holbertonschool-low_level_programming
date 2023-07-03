#include "main.h"
#include <string.h>

/**
 * rev_string - Reverses a string.
 * @s: The string to reverse.
 *
 * Description: This function reverses the characters in the string `s`
 * in-place, modifying the original string. It swaps the characters from both
 * ends of the string until the middle is reached.
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i, j;
	char c;

	j = strlen(s);
	for (i = 0, j -= 1; i < j; i++, j--)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}
