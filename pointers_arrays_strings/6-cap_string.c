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

	while (*str != '\0')
	{
		if (*str == ' ')
		{
			str++;
			if (*str >= 'a' && *str <= 'z')
			{
				*str = *str - 'a' + 'A';
			}
			str++;
		}
	}
	return (ptr);
}
