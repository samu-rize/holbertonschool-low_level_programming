#include "main.h"
/**
 * _strlen - check the code
 * @s: integer
 * Return: Always 0.
*/
int _strlen(char *s)
{
	int a;

	while (s[a] != '0')
		a++;
	return (a);
}
