#include "main.h"
/**
 * _puts - check the code
 * @str: char
 * Return: Always 0.
*/
void _puts(char *str)
{
	int a;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
