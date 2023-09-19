#include "main.h"
#include <stdio.h>

/**
 * rev_string - Entry point
 *
 * @s :this is the input of the function
 *
 * Return:  (Success)
 */

void rev_string(char *s)
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
