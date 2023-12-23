#include "hash_tables.h"

/**
 * hash_table_print - function that print all data in hash table
 * @ht: pointer to hash table
 * Return: no return
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *it;
	unsigned long int it_int;
	int first = 1;

	printf("{");
	if (!ht)
		return (NULL);

	for (it_int = 0; it_int < ht->size; it_int++)
	{
		it = ht->array[it_int];
		while (it != NULL)
		{
			if (!first)
				printf(", ");

			printf("'%s' :  %s", it->key, it->value);
			it = it->next;
			first = 0;
		}
	}
	printf("}\n");

}
