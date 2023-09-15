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
	int i, j, x;

	for (j = 0; j < n; j++)
	{	x = j;

		for (i = 0; i < x; i++)
		{
			_putchar(' ');
		}
		_putchar('\\');

		_putchar('\n');
	}
}
