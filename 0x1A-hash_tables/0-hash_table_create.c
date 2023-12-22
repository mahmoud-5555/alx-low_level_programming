#include "hash_tables.h"

/**
 * hash_table_create - function that creat hash table
 * @size: the size of the hash table
 * Return: pointer to hash table or null
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = malloc(sizeof(hash_table_t));
	unsigned long int i, j;

	if (!hash_table)
		return (NULL);

	hash_table->size = size;
	if (!size)
	{
		free(hash_table);
		return (NULL);
	}
	hash_table->array = malloc(sizeof(hash_node_t *) * size);

	if (!hash_table->array)
	{
		free(hash_table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		hash_table->array[i] = malloc(sizeof(hash_node_t));
		if (!hash_table->array[i])
		{
			for (j = 0; j < i; j++)
			{
				free(hash_table->array[j]);
			}
			free(hash_table->array);
			free(hash_table);
			return (NULL);
		}
	}
	return (hash_table);

}
