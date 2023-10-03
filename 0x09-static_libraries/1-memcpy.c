#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_memcpy - Entry point
 *
 * @dest : the input that we deal with it
 * @src : the input that we deal with it
 * @n : the input that we deal with it
 * Return:  (Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (n--)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
