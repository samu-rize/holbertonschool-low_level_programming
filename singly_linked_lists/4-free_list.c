#include "lists.h"

/**
 * print_list - function that print all elements of a list
 *
 * @h: the varible with type list_t
 * Return: the number of nodes
 */
void free_list(list_t *head)
{
	list_t *current, *next;

	if (!head)
	{
		return;
	}

	current = head;
	while (current)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
