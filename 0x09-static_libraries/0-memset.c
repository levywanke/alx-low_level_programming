#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @str: memory area to be filled
 * @r: char to copy
 * @m: number of times to copy r
 *
 * Return: pointer to the memory area str
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}

	return (s);
}
