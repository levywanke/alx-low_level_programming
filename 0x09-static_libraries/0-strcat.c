#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 *
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int m, n;

	m = 0;
	n = 0;

	while (dest[m] != '\0')
		m++;

	while (src[n] != '\0')
	{
		dest[m] = src[n];
		m++;
		n++;
	}

	dest[m] = '\0';

	return (dest);
}
