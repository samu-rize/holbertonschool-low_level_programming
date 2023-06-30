#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 * @str: array of chars
 *
 * Return: array
 */
char *cap_string(char *str)
{
	char *ptr = str;
	int i = 1;

	while (*str != '\0')
	{
		if (*str == ' ' || *str == '.')
		{
			i = 1;
		}
		if (*str >= 'a' && *str <= 'z' && i == 1)
		{
			*str = *str - 'a' + 'A';
		}
		if (((*str >= 'A' && *str <= 'Z') || (*str >= '0' && *str <= '9')) && (i == 1))
		{
			i = 0;
		}
		str++;
	}
	return (ptr);
}
