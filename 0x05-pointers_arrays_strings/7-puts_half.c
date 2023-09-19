#include "main.h"
#include <stdio.h>

/**
 * puts_half - Entry point
 *
 * @str: the input that we deal with it
 *
 * Return:  (Success)
 */

puts_half(char *str)
{
	int it = 0;
	int i;

	while (str[it] != '\0')
	{

		it += 1;
	}
	if (it % 2 == 0)
		i = (it - 1) / 2;
	else
		i = it / 2;

	for (i; i < it; i++)
		putchar(str[i]);
	putchar('\n');
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
