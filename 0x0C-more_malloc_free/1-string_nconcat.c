#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* string_nconcat - function that concate two string
*
* @n: number of bytes that you wnna to concarte
* @s1: string 1
* @s2: string 2
*
* Return:(void) pointer
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int iteretor = 0, j = 0, len_s1 = 0, len_s2 = 0;

    /*cout the length of the string*/
	while (s1 && s1[len_s1])
		len_s1++;

	while (s2 && s2[len_s2])
		len_s2++;

	if (n < len_s2)
		ptr = malloc(sizeof(char) * (len_s1 + n + 1));
	else
		ptr = malloc(sizeof(char) * (len_s1 + len_s2 + 1));

	if (!ptr)
		return (NULL);

	while (iteretor < len_s1)
	{
		ptr[iteretor] = s1[iteretor];
		iteretor++;
	}

	while (n < len_s2 && iteretor < (len_s1 + n))
		ptr[iteretor++] = s2[j++];

	while (n >= len_s2 && iteretor < (len_s1 + len_s2))
		ptr[iteretor++] = s2[j++];

	ptr[iteretor] = '\0';

	return (ptr);
}

