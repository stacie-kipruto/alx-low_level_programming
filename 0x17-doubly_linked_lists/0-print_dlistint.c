#include "lists.h"

/**
 * print_dlistint - prints all the elements in the list
 * @h: doubly linked list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		printf("%d\n", h->n);

		i++;
		h = h->next;
	}
	return (i);
}
