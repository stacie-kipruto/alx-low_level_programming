#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 * @h: pointer to a list
 *
 * Return: number of nodes.
 */
size_t print_list(const list_t *h)
{
	/* 'i' is the counter var */
	int i = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			i++;
		}
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
