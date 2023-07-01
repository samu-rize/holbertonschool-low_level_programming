#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string.
 * @s: a pointer to the memory area to be filled.
 * @c: char.
 * 
 * Return: char.
 */

char *_strchr(char *s, char c)
{
	unsigned short int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
        {
            j = 1;
        }
        if (j == 1)
        {
            putchar(s[i]);
        }
        i++;
	}
    if (j == 1)
    {
        putchar('\n');
    }    
	return (s);
}
