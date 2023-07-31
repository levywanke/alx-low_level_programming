#include "lists.h"

/**
 * add_nodeint - function that adds a node
 * @head: pointer to the first element
 * @n: element to add to the list
 *
 * Return: the value added to the node
 **/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *first;

	first = malloc(sizeof(listint_t));
	if (!first)
		return (NULL);
	first->n = n;
	first->next = *head;
	*head = first;

	return (first);
	}
