#include "main.h"
#include <stdio.h>
/**
 * print_line - Entry point
 *
 * @n:the input of the function that will be deal with it
 *
 *
 * Return:  (Success)
 */

void print_line(int n)
{
	for (n; n > 0; n--)
	{
		_putchar('_');

	}
	putchar('\n');
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
