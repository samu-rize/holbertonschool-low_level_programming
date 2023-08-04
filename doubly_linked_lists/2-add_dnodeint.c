#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: A pointer to the pointer to the head of the list.
 * @n: The integer to be added as the data of the new node.
 *
 * Return: A pointer to the newly created node. If memory allocation fails,
 *         the function returns NULL.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->prev = NULL;
	new->n = n;
	new->next = *head;

	if (head)
	{
		(*head)->prev = new;
	}

	*head = new;

	return (new);
}
