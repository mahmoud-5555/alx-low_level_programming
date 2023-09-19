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


	while (str[it] != '\0')
	{
		putchar(str[it]);
		it += 2;
	}
	putchar('\n');
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
