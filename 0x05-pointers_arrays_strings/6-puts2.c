#include "main.h"
#include <stdio.h>

/**
 * puts2 - Entry point
 *
 * @str: the input that we deal with it
 *
 * Return:  (Success)
 */

void puts2(char *str)
{
	int it = 0;
	int i;

	while (str[it] != '\0')
	{

		it += 1;
	}
	for (i = 0; i < it; i += 2)
		putchar(str[i]);
	putchar('\n');
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
