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
	int len_s1 = 0;
	int len_s2 = 0;
	unsigned int  iterator = 0;

    if (*s1 == '\0' && *s2 == '\0')
		return (NULL);


	while (*(s1 + iterator) != '\0')
	{
		len_s1++;
		iterator++;
	}

	iterator = 0;

	while (*(s2 + iterator) != '\0')
	{
		len_s2++;
		iterator++;
	}
    

	ptr = (char *) malloc(len_s1 + n + 1);

	if (ptr == NULL)
		return (ptr);


	for (iterator = 0; *(s1 + iterator) != '\0'; iterator++)
	{
		*(ptr + iterator) = *(s1 + iterator);
	}

	for (iterator = 0; iterator < n; iterator++)
	{
		*(ptr + iterator + len_s1) = s2[iterator % len_s2];
	}
	*(ptr + iterator + len_s1) = '\0';



	return (ptr);
}
