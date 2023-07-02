#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to capitalize.
 *
 * Description: This function capitalizes the first character of each word in
 *              the string `str`. Words are delimited by spaces, tabs, or periods.
 *              It modifies the original string and returns a pointer to it.
 *
 * Return: A pointer to the modified string.
 */

char *cap_string(char *str)
{
	char *ptr = str;
	int i = 1;

	while (*str != '\0')
	{
		if (*str == ' ' || *str == '.' || *str == '	')
		{
			i = 1;
		}
		if (*str >= 'a' && *str <= 'z' && i == 1)
		{
			*str = *str - 'a' + 'A';
		}
		if (((*str >= 'A' && *str <= 'Z')
		|| (*str >= '0' && *str <= '9')) && (i == 1))
		{
			i = 0;
		}
		str++;
	}
	return (ptr);
}
