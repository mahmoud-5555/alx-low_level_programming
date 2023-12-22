#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key.
 * @key: the key that should  search about
 * @size: the size of the array of the hash table
 * Return: the index at which the key/value pair should be stored in the
 * array of the hash table
 * You will have to use this hash function for all the next tasks
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int res = hash_djb2(key) % size;

	return (res);
}
