#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* create_array - Entry point
* @size: the size of array
* @c: the string that we wnna to located in memory
* Return: pointer to the first elemeint of an array or Null if function
*
*/

char *create_array(unsigned int size, char c)
{
	char *arr;

	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	*arr = (char *) malloc(sizeof(char) * size);

	if (arr == NULL)
	{

		/*perror("malloc");*/

		exit(1);

	}
	else
	{
		while (i < size)
		{
			*(arr + i) = c;
			i++;
			c++;
		}


	}

	return (arr);

}
