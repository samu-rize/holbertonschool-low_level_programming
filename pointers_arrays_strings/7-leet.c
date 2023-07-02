#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @s: The input string.
 *
 * Description: This function takes a string `s` and encodes it into 1337
 *              by replacing certain characters with their corresponding
 *              numerical or special character representation. The encoding
 *              rules are defined by the `l` and `n` arrays. The original
 *              string is modified in place and a pointer to the modified
 *              string is returned.
 *
 * Return: A pointer to the modified string.
 */

char *leet(char *s)
{
	char *p = s;
	int i = 0, j = 0;
	char l[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L', '\0'};
	char n[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1', '\0'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; l[j] != '\0'; j++)
		{
			if (s[i] == l[j])
			{
				s[i] = n[j];
				break;
			}
		}
	}
	return (p);
}
