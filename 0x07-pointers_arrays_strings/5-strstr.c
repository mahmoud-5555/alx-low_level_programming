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
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (NULL);
}
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
