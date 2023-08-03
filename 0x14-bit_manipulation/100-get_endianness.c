#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
unsigned int num = 1;
char *endianCheck = (char *)&num;

/* If the first byte of num is 1, the system is little endian */
return (*endianCheck);
}

