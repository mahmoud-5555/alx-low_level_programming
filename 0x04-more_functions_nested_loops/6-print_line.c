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
	int i;

	for (i = 0; i < n; i++)
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
