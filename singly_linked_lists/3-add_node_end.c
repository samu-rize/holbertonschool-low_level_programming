#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: A pointer to the pointer to the head of the list.
 * @str: The string to be added as the data of the new node.
 *
 * Return: A pointer to the newly created node. If memory allocation fails,
 *         the function returns NULL.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = (list_t *)malloc(sizeof(list_t));
	list_t *ptr = *head;

	if (!new)
		return (NULL);

	if (str)
	{
		new->str = strdup(str);
		if (!new)
		{
			free(new);
			return (NULL);
		}
		new->len = strlen(new->str);
	}

	if (ptr)
	{
		while (ptr->next)
		{
			ptr = ptr->next;
		}
		ptr->next = new;
	}

	else
	{
		*head = new;
	}
	return (new);
}
