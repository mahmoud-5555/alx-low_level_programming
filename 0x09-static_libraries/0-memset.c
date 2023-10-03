#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_memset - Entry point
 *
 * @s: the input that we deal with it
 * @b : the input that we deal with it
 * @n : the input that we deal with it
 * Return:  (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n--)
	{
		*(s + i) = b;
		i++;

	}
	return (s);
}
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
