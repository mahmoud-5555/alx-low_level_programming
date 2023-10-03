#include "main.h"
#include <stdio.h>

/**
 * _puts - Entry point
 *
 * @str: the input that we deal with it
 *
 * Return:  (Success)
 */

void _puts(char *str)
{

	int it = 0;

	while (*(str + it) != '\0')
	{
		putchar(*(str + it));
		it++;
	}
	putchar('\n');
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
