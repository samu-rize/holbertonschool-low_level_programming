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
	int i = 0;

	while (*str != '\0')
	{

	
		if (*str == ' ')
		{
			i = 1;
		}
		if (*str >= 'a' && *str <= 'z' && i == 1)
		{
			*str = *str - 'a' + 'A';
			i = 0;
		}
		str++;
	}
	return (ptr);
}
