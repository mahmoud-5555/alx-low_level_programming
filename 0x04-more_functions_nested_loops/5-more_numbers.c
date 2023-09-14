#include "main.h"
#include <stdio.h>
/**
 * more_numbers - Entry point
 *
 *
 *
 *
 * Return:  (Success)
 */

void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar('1');

			_putchar((i % 10) + '0');

		}

		_putchar('\n');
	}
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
