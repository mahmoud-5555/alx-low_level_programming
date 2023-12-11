#include "main.h"
#include <stdio.h>

/**
 * _strlen - Entry point
 *
 * @s: the input that we deal with it
 *
 * Return:  (Success)
 */

int _strlen(char *s)
{

	int it = 0;
	int counter = 0;

	while (*(s + it) != '\0')
	{
		counter++;
		it++;
	}
	return (counter);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
