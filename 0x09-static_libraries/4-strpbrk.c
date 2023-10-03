#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strpbrk - Entry point
 *
 * @s : the input that we deal with it
 * @accept : the input that we deal with it
 *
 * Return:  (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	while (*s)
	{
		i = 0;


		while (*(accept + i))
		{
			if (*s == *(accept + i))
				return (s);
			i++;
		}
		s++;
	}
	return (NULL);
}
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
