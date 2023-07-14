#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - Concatenates two strings up to n bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes from s2 to concatenate.
 *
 * Return: A pointer to the newly allocated concatenated string.
 *         If malloc fails, the function returns NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned short int len, i, j;

	len = strlen(s1);
	ptr = malloc((len + n + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}

	if (*s1 == '\0')
	{
		s1 = "";
	}
	if (*s2 == '\0')
	{
		s2 = "";
	}

	for (i = 0; i < len; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		ptr[i + j] = s2[j];
	}
	ptr[i + j] = '\0';

	return (ptr);
	free(ptr);
}
