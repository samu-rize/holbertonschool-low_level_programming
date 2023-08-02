#include "main.h"

/**
 * list_len - function that returns number of elements in a linked list_t list.
 *
 * @h: the varible with type list_t
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		h = h->next;
		num++;
	}
	return (num);
}
