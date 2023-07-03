#include <unistd.h>

/**
 * _putchar - Writes a character to the standard output (stdout)
 * @c: The character to be printed
 *
 * Return: On success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
