#include "lists.h"

/**
 * sum_listint - function that returns the sum of elements
 * @head: pointer to the first node
 *
 * Return:resulting sum
 **/

int sum_listint(listint_t *head)
{
	int  add = 0;
	listint_t *temps = head;

	while (temps)
	{
		add += temps->n;
		temps = temps->next;
	}
	return (add);
}
