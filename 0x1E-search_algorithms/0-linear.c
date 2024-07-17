#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - function use linear algo in searching
 * @array: pointer to array
 * @value: the value that wanna seach about
 * @size: the size of the an array
 * Return: return the index of value or -1 if value doesn't exist
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size ; i++)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

