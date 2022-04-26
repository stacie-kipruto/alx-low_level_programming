#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: double pointer to head of list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *temp2;

	if (head == NULL)
		return;
	temp2 = *head;
	while (temp2 != NULL)
	{
		temp = temp2;
		temp2 = temp2->next;
		free(temp);
	}
	*head = NULL;
}
