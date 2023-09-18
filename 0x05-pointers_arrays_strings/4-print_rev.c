#include "main.h"
#include <stdio.h>

/**
 * print_rev - Entry point
 *
 * @s: the input that we deal with it
 *
 * Return:  (Success)
 */

void print_rev(char *s)
{
	int it = 0;

	while (*(s + it) != '\0')
	{
		it++;
	}
	for (--it; it > 0; it--)
		putchar(*(s + it));
	putchar('\n');

}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
