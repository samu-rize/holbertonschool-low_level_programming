#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 * @str: The string to modify.
 *
 * Description: This function iterates through the characters of the string
 * `str` and converts any lowercase letters to uppercase. The function
 * modifies the original string in-place and returns a pointer to the
 * modified string.
 *
 * Return: A pointer to the modified string.
 */

char *string_toupper(char *str)
{
	char *ptr = str;

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - 'a' + 'A';
		}
		str++;
	}
	return (ptr);
}
