#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range
 * @max: maximum range
 *
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int itretor, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);


	for (itretor = 0; min <= max; itretor++)
		ptr[itretor] = min++;

	return (ptr);
}
