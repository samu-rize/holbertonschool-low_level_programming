#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strcmp - compares two strings.
 * @s1: array of chars.
 * @s2: array of chars.
 * Return: Always 0.
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
