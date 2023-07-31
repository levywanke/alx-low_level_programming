#include "lists.h"

/**
 * free_listint - function yhat frees a list
 * @head: list to be freed
 **/

void free_listint(listint_t *head)
{
	listint_t *tempt;

	while (head)
	{
		tempt = head->next;
		free(head);
		head = tempt;
	}
}
