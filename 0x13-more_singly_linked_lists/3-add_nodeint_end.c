#include "lists.h"

/**
 * add_nodeint_end - function that ads nde at the end
 * @head: pointer to the first element
 * @n: data in the node
 *
 * Return: return the values with the added node value
 **/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *data;
	listint_t *temp = *head;

	data = malloc(sizeof(listint_t));
	if (!data)
		return (NULL);
	data->n = n;
	data->next = NULL;

	if (*head == NULL)
	{
		*head = data;
		return (data);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = data;
	return (data);
}
