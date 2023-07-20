#include "function_pointers"

/**
 * print_name - Prints a name using a function pointer.
 * @name: The name to print.
 * @f: A pointer to the function used to print the name.
 *
 * Description: This function takes a name and a function pointer as arguments.
 *              If the function pointer or the name is NULL, the function does
 *              nothing. Otherwise, it calls the function pointed by 'f' to
 *              print the name.
 */

void print_name(char *name, void (*f)(char *))
{
	if (!f || !name)
	{
		return;
	}
	f(name);
}
