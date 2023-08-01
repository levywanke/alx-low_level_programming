#include "lists.h"

/**
 * get_nodeint_at_index - functon that returns the th node of the list
 * @head: pointer to the first element
 * @index:The node to return
 *
 * Return: returns the nth node of the list
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int l = 0;
	listint_t *tempo = head;

	while (tempo && l < index)
	{
		tempo = tempo->next;
		l++;
	}
	return (tempo ? tempo : NULL);
}
