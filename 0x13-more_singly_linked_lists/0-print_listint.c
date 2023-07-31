#include "lists.h"

/**
 * printf_listint - function that  prints elements of a node
 * @h:the pointer to the elements
 *
 * Return - returns the elements of the linked list
 */

size_t print_listint(const listint_t *h){
      size_t count = 0;

      while(h)
      {
	      printf("%d\n",h->n);
	      count++;
	      h=h->next;
      }
      return(count);
}
 
