#include "hash_tables.h"
/**
 * hash_table_delete - function that delete the hash table
 * @ht: is pointer to hash table
 * Return: no return
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *it, *prev;
	unsigned long int it_int;

	if (!ht)
		return;

	for (it_int = 0; it_int < ht->size; it_int++)
	{
		it = ht->array[it_int];
		while (it != NULL)
		{
			prev = it;
			it = it->next;
			free(prev->key);
			free(prev->value);
			free(prev);
		}
	}
	free(ht->array);
	free(ht);

}
