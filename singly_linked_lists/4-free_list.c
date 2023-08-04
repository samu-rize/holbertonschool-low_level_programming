#include "lists.h"

/**
 * free_list - Frees all the nodes of a linked list.
 * @head: A pointer to the head of the linked list.
 *
 * Return: void.
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
