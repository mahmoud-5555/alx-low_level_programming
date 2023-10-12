#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - prints each array elem on a newl
 * @array: array
 *
 * @size: how many element (pointers)
 * @action: pointer to print in regular or hex
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{

	unsigned int iteretor;

	if (array == NULL || action == NULL)
		return;

	for (iteretor = 0; iteretor < size; iteretor++)
	{
		action(array[iteretor]);
	}

}
