#include "main.h"

/**
 * main - Entry point of the program
 *
 * Description: This program prints the string "_putchar" followed by a new line
 * 
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch[] = "_putchar";
	int i;

	for (i = 0; ch[i] != '\0'; i++)
	{
		_putchar(ch[i]);
	}
	_putchar('\n');
	return (0);
}
