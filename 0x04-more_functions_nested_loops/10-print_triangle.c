#include "main.h"
#include <stdio.h>
/**
 * print_triangle - Entry point
 *
 *
 * @size: input of function
 *
 * Return:  (Success)
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int n, y;

		for (n = 1; n <= size; n++)
		{
			for (y = n; y < size; y++)
			{
				_putchar(' ');
			}

			for (y = 1; y <= n; y++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
