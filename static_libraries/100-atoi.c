#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Description: This function iterates over each character of the string and
 * converts it to an integer. It starts with an initial result of
 * 0 and multiplies it by 10 for each digit encountered, adding the
 * numeric value of the digit to the result. It also takes into
 * account a sign character '-' to determine the sign of the
 * resulting integer. The function stops converting when it
 * encounters a non-digit character or if the result is already
 * greater than 0, which means it has encountered non-digit
 * characters after a valid number. The resulting integer is
 * multiplied by the sign to preserve the sign of the original
 * string representation.
 *
 * Return: The converted integer.
 */

int _atoi(char *s)
{
	unsigned int rsl = 0, sign = 1;

	while (*s)
	{
		if (*s >= '0' && *s <= '9')
			rsl = (rsl * 10) + (*s - '0');
		else if (*s == 45)
			sign = sign * -1;
		else if (rsl > 0)
			break;
		s++;
	}
	return (rsl * sign);
}
