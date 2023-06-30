#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @a: array of integers
 * @n: number of elements
 *
 * Return: void
 */
char *string_toupper(char *str)
{
    while (*str != '\0')
    {
        if (*str >= 'a' && *str <= 'z')
        {
            *str = *str - 'a' + 'A';
        }
        str++;
    }
    return (str);
}
