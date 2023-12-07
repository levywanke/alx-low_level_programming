#include "lists.h"

/**
 * free_dlistint - storage free of the craeted lists
 *
 * @head: the head
 * Return: null
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}
}
