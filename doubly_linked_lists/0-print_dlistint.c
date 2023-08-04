#include "lists.h"

/**
 * print_list - function that print all elements of a list
 *
 * @h: the varible with type list_t
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}
	return (num);
}
