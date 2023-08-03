#include "list.h"

/**
 * print_list - function that print all elements of a list
 *
 * @h: the varible with type list_t
 * Return: the number of nodes
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int i;

	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++);

	new->str = strdup(str);
	new->len = i;
	new->next = (*head);

	return (new);
}
