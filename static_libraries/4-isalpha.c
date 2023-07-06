# include "main.h"

/**
 * _isalpha - Checks if a character is alphabetic
 * @c: The character to be checked
 *
 * Description: This function checks if the given character is an alphabetic
 * character. It returns 1 if the character is alphabetic, and 0 otherwise.
 *
 * Return: 1 if character is alphabetic, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
		return (1);

	else
	{
		return (0);
	}
}
