#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers.
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
