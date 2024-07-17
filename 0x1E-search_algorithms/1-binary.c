#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"


/**
 * binary_search -  function search about value using biary_algo
 * @array: pointer to an array
 * @size: the size of the array
 * @value: the value that wanna search about it
 * Return: the index of the value or -1 if it's not exist
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, k = size - 1;

	if (!array)
		return (-1);

	while (k >= i)
	{
		size_t j = i, m = (k + i) / 2;

		printf("Searching in array: ");
		for (; j <= k; j++)
		{
			if (j == k)
				printf("%d\n", array[j]);
			else
				printf("%d, ", array[j]);
		}

		if (array[m] == value)
			return (m);
		else if (array[m] > value)
			k = m - 1;
		else
			i = m + 1;

	}
	return (-1);
}
