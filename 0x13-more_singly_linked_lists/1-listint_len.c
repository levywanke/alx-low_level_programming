#include "lists.h"

/**
 * listint_len - function that returns number of elements
 * @h: pointer that links the elements
 *
 * Return: returns the number of elements
 **/

size_t listint_len(const listint_t *h)
{
	size_t count  = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
