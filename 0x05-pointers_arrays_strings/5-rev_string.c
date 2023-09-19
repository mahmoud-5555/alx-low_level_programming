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

	while (s[it] != '\0')
	{
		it++;
	}

	char string[--it];

	for (i = it; i >= 0; i--)
		string[it - i] = s[i];

	for (i = 0; i <= it; i++)
		s[i] = string[i];
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
