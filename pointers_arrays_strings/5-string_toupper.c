#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @str: array of chars
 *
 * Return: array
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
