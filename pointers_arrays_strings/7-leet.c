#include "main.h"
/**
 * leet - encodes a string into 1337.
 * @s: array of chars
 *
 * Return: array
 */
char *leet(char *s)
{
	char *p = s;
	int i = 0, j = 0;
	char l[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L', '\0'};
	char n[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1', '\0'};

	for (i = 0; s[i] < '\0'; i++)
	{
		for (j = 0; l[j] < '\0'; j++)
		{
			if (s[i] == l[j])
			{
				s[i] = n[j];
			}
		}
	}
	return (p);
}
