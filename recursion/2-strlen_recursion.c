#include "main.h"
#include <stdio.h>


int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s < '\0')
	{
		i += _strlen_recursion(s + 1) +1;
	}
	return (i);
}
