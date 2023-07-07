#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @str: memory area to be filled
 * @r: char to copy
 * @m: number of times to copy r
 *
 * Return: pointer to the memory area str
 */
char *_memset(char *str, char r, unsigned int m)
{
	unsigned int j;

	for (j = 0; j < m; j++)
	{
		str[j] = r;
	}

	return (str);
}
