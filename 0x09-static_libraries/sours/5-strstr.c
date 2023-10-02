#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strstr - Entry point
 *
 * @haystack : the input that we deal with it
 * @needle : the input that we deal with it
 *
 * Return:  (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *pointer1 = haystack;
		char *pointer2 = needle;

		while (*pointer1 == *pointer2 && *pointer2 != '\0')
		{
			pointer1++;
			pointer2++;
		}

		if (*pointer2 == '\0')
			return (haystack);
	}

	return (NULL);
}
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
