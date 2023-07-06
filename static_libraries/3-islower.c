# include "main.h"

/**
 * _islower - Checks if a character is lowercase
 * @c: The character to be checked
 *
 * Description: This function checks if the given character is lowercase.
 * It returns 1 if the character is lowercase, and 0 otherwise.
 *
 * Return: 1 if character is lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);

	else
	{
		return (0);
	}
}
