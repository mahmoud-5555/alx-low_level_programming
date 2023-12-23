#include "hash_tables.h"

/**
 * hash_table_get - function that return the value of the key
 * @ht: pointer to hash table
 * @key: the key that wanna searched
 * Return: NULL or the value
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *it;
	unsigned long int index;

	if (!ht || !key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	it = ht->array[index];
	while (it != NULL)
	{
		if (!strcmp(it->key, key))
		{
			return (it->value);
		}
		it = it->next;
	}
	return (NULL);

}
