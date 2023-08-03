#include "lists.h"
/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: A pointer to the pointer to the head of the list.
 * @str: The string to be added as the data of the new node.
 *
 * Return: A pointer to the newly created node. If memory allocation fails,
 *         the function returns NULL.
 */
list_t *add_node(list_t **head, const char *str) {

    list_t *new;
	int i;

	if (str == NULL)
        return (NULL);

	new = (list_t *)malloc(sizeof(list_t));

    if (new == NULL)
	{
        return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++);

    new->str = strdup(str);
	new->len = i;
    new->next = *head;

    *head = new;

    return (new);
}
