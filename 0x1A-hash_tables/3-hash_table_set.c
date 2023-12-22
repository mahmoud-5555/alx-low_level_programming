#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: is the hash table you want to add or update the key/value to
 * @key: is the key. key can not be an empty string
 * @value: the value associated with the key. value must be duplicated.
 * value: can be an empty string
 * Return: 1 if it succeeded, 0 otherwise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = (malloc(sizeof(hash_node_t))), *it;
	unsigned long int index;

	if (!new_node)
		return (1);

	if (!ht || !key)
	{
		free(new_node);
		return (1);
	}
	index = key_index(key, ht->size);
	/* If there's already a node in this position */
	if (ht->array[index] == NULL)
		ht->array[index] = new_node;
	else
	{
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	new_node->key = key;
	new_node->value = value;



	return (0);
}
