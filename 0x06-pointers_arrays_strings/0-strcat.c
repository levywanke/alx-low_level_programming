#include "main.h"

/**
 * _strcat - a function to concatenate strings
 * @dest: string to append to
 * @src: string to add
 * return: a pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;
	while(src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
        dest[i] = '\0';
        return dest[i];
}	
