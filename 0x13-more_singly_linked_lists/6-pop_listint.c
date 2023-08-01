#include "lists.h"

/**
 * pop_listint - functuon that pops the head node
 * @head: pointer to the first element
 *
 * Return:The deleted element
 **/

int pop_listint(listint_t **head)
{
	listint_t *tempt;
	int data;

	if (!head || !*head)
		return (0);

	data = (*head)->n;
	tempt = (*head)->next;
	free(*head);
	*head = tempt;

	return (data);
}
