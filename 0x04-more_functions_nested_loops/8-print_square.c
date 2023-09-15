#include "main.h"
#include <stdio.h>
/**
 * print_square - Entry point
 *
 *
 * @size : the input of the function
 *
 * Return:  (Success)
 */

void print_square(int size)
{
	int i, j;

	for (j = 0; j < size; j++)
	{

		for (i = 0; i < size; i++)
		{
			_putchar('#');
		}


		_putchar('\n');
	}
	if (i <= 0)
		_putchar('\n');
}
