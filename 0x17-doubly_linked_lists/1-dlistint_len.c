#include "lists.h"

/**
 * dlistint_len - returns length of linked list
 * @h: doubly linked list
 * Return: number of elements present
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
