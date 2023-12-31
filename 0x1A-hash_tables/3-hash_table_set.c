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

	if (!ht || !key || !value || ht->size == 0 || !strlen(key))
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	/* If there's already a node in this position */
	it = ht->array[index];
	while (it != NULL)
	{
		if (!strcmp(it->key, key))
		{
			newvalue = strdup(value);
			if (!newvalue)
				return (0);
			free(it->value);
			it->value = newvalue;
			return (1);
		}
		it = it->next;
	}
	new_node = create_node((char *) key, (char *)value);
	if (!new_node)
		return (0);
	 new_node->next = ht->array[index];
	 ht->array[index] = new_node;
	return (1);
}

/**
 * create_node - function that creat the new node
 * @key: the key of the node
 * @value: value of the node
 * Return: return new node
*/
hash_node_t *create_node(char *key, char *value)
{
	hash_node_t *node = malloc(sizeof(hash_node_t));

	if (!node)
		return (NULL);
	node->key = malloc(sizeof(key));
	node->value = malloc(sizeof(value));
	strcpy(node->key, key);
	strcpy(node->value, value);
	return (node);
}
