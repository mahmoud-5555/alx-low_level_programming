#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strncpy - Entry point
 *
 * @dest : the input that we deal with it
 * @src : the input that we deal with it
 * @n :the input of the function
 * Return:  (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int ln = 0;
	int i = 0;

	while (dest[ln] != '\0')
	{

		ln++;
	}

	for (i = 0; (i < n) && src[i] != '\0' ; i++)
	{

		dest[i] = src[i];
	}
	if (n >= ln)
	{
		dest[i] = '\0';
	}
	return (dest);

}
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
