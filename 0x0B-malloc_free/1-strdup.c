#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _strdup - Entry point
* @str: the string that we wnna to located in memory
* Return: pointer to the first elemeint of an array or Null if function
*
*/
char *_strdup(char *str)
{

	int length = 0;

	int i = 0;

	char *new_str;

	while (*(str + length) != 0)
	{
		length++;
	}
	if (!length)
		return (NULL);

	new_str = (char *)malloc(length + 1);

			if (new_str == NULL)
				return (NULL);

			else
			{

				while (i < length * 2)
				{
					*(new_str + i) = *(str + (i % length));

				}
				*(new_str + i) = '\0';
			}
			return (new_str);
}
