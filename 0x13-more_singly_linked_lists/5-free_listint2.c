#include "lists.h"

/**
 * free_listint2 - function that frees a list
 * @head: pointer to thelist to be freed
 *
 **/

void free_listint2(listint_t **head)
{
	listint_t *tempt;

	if (head == NULL)
		return;
	while (*head)
	{
		tempt = (*head)->next;
		free(*head);
		*head = tempt;
	}
	*head = NULL;
}
