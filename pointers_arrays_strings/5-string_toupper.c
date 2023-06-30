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
		if (*str == 'a' || *str == 'A')
		{
			*str = '4';
		}
		if (*str == 'e' || *str == 'E')
		{
			*str = '3';
		}
		if (*str == 'o' || *str == 'O')
		{
			*str = '0';
		}
		if (*str == 't' || *str == 'T')
		{
			*str = '7';
		}
		if (*str == 'l' || *str == 'L')
		{
			*str = '1';
		}
		str++;
	}
	return (ptr);
}
