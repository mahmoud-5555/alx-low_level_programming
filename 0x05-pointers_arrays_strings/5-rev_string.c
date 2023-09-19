#include "main.h"
#include <stdio.h>
#include <stdlib.h>
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
	it -= 1;
	char *str = (char *)malloc(it + 1);

	for (i = it; i >= 0; i--)
		str[it - i] = s[i];

	for (i = 0; i <= it; i++)
		s[i] = str[i];
	free(str);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
