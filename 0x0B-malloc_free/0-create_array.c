#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array to create
 * @c: char to initialize the array c
 *
 * Return: pointer to the array (Success), NULL (Error)
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int l = 0;

	if (size == 0)
		return (NULL);

	ptr = (char *) malloc(sizeof(char) * size);

	if (ptr == NULL)
		return (0);

	while (l < size)
	{
		*(ptr + l) = c;
		l++;
	}

	*(ptr + 1) = '\0';

	return (ptr);
}
