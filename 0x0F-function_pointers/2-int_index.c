#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to be searched
 * @size: size of the array to be searched
 * @cmp: pointer to the function
 *
 * Return: index of the first element for which
 * the cmp function does not return 0, or -1 if no match is found
 * or size is negative
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int l;

	if (array && cmp)
	{
		for (l = 0; l < size; l++)
		{
			if (cmp(array[l]) != 0)
				return (l);
		}
	}

	return (-1);
}
