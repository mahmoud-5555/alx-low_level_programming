#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_strspn - Entry point
 *
 * @s : the input that we deal with it
 * @accept : the input that we deal with it
 *
 * Return:  (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, test, counter = 0;

	while (*s)
	{
		i = 0;
		test = 1;

		while (*(accept + i))
		{
			if (*s == *(accept + i))
			{
				counter++;
				test = 0;
				break;
			}

			i++;

		}

		if (test)
			return (counter);
		s++;
	}
	return (counter);
}
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
