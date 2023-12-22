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
	hash_node_t *new_node, *it;
	unsigned long int index;
	char *newvalue;

	if (!ht || !key || !value || ht->size == 0)
	{
		free(new_node);
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	/* If there's already a node in this position */
	it = ht->array[index];
	while (!it)
	{
		if (!strcmp(it->value, value))
		{
			newvalue = strdup(value);
			if (!newvalue)
				return (0);
			free(it->value);
			it->value = newvalue;
			return (1);
		}
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	 new_node->next = ht->array[index];
	 new_node->key = key;
	 new_node->value = value;
	 ht->array[index] = new_node;
	return (0);
}
