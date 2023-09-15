#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - Entry point
 *
 *
 * @n : the input of the function
 *
 * Return:  (Success)
 */

void print_diagonal(int n)
{
	int i, j;

	for (j = 0; j < n; j++)
	{
		for (i = 0; i < n; i++)
			_putchar('\\');

		_putchar('\n');
	}
}
