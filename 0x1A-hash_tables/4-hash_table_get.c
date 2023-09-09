#include "hash_tables.h"
/**
 * hash_table_get - Adds an element to the hash table
 * @ht: the hash table
 * @key: Key
 *
 * Return: Value, NULL otherwise
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index])
		return ht->array[index]->value;
	return (NULL);
}
