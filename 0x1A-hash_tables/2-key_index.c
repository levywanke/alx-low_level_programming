#include "hash_tables.h"

/**
 * key_index - key index stored in harsh
 * @key: actual key to acguire its index
 * @size: arraysize of harsh table
 *
 * Return: key index
 * Description: djbs algorithm is used
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
