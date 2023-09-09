#include "hash_tables.h"
/**
 * hash_table_set - Adds an element to the hash table
 * @ht: the hash table
 * @key: Key
 * @value: the node's vlaue
 *
 * Return: 1 if success, 0 otherwise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL;
	unsigned long int index = 0;
	char *dup_v = NULL;

	if (new_node == NULL && key == NULL)
		return (0);

	new_node = malloc(sizeof(new_node));
	*dup_v = strdup(value);
	index = hash_djb2(key);
	new_node->key = key;
	new_node->value = dup_v;

	if (ht->array == NULL)
		return (0);
	if ((ht->array)[index] == NULL)
	{
		(ht->array)[index] = new_node;
		new_node->next = NULL;
	}
	else
	{
		new_node->next = ht->array[index];
		(ht->array)[index] = new_node;
	}
	return (1);
}
