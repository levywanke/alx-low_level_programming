#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts new node at any position
 * @head: pointer to the first node
 * @idx: the exact position of the node;
 * @n: data in the node;
 * Return:returns the inserted values
 *
 **/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int p;
	listint_t *node;
	listint_t *tempt = *head;

	node = malloc(sizeof(listint_t));
	if (!node || !head)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}

	for (p = 0; tempt && p < idx; p++)
	{
		if (p == idx - 1)
		{
			node->next = tempt->next;
			tempt->next = node;
			return (node);
		}
		else
			tempt = tempt->next;
	}

	return (NULL);
}
