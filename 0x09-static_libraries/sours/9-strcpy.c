#include "main.h"
#include <stdio.h>

#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: input og the function (to)
 * @src: the input of the function (from)
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int it = 0;
	int it2 = 0;

	while (*(src + it) != '\0')
	{
		it++;
	}

	for ( ; it2 < it ; it2++)
	{
		dest[it2] = src[it2];
	}

	dest[it] = '\0';
	return (dest);
}


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
