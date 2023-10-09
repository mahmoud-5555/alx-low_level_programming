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
	unsigned int len_s1 = 0;
	unsigned int len_s2 = 0;
	unsigned int  iterator = 0;

    if (s1 == NULL  || s2 == NULL)
    {
        ptr = (char *) malloc(1);
        ptr[0] = '\0';
        return (ptr);
    }



	while (*(s1 + iterator) != '\0')
	{
		len_s1++;
		iterator++;
	}

	iterator = 0;

	while (*(s2 + iterator) != '\0' && iterator < n)
	{
		len_s2++;
		iterator++;
	}
    

	if (n < len_s2)
		ptr = malloc(sizeof(char) * (len_s1 + n + 1));
	else
		ptr = malloc(sizeof(char) * (len_s2 + len_s1 + 1));



	if (ptr == NULL)
		return (NULL);


	for (iterator = 0; *(s1 + iterator) != '\0'; iterator++)
	{
		*(ptr + iterator) = *(s1 + iterator);
	}

	for (iterator = 0; iterator < len_s2; iterator++)
	{
		*(ptr + iterator + len_s1) = s2[iterator];
	}
	*(ptr + n + len_s1) = '\0';



	return (ptr);
}
