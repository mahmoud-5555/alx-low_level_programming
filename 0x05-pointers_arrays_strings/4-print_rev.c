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
	int i;

	while (*(s + it) != '\0')
	{
		it++;
	}
	for (i = --it; i >= 0; i--)
		putchar(*(s + i));
	putchar('\n');

}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
