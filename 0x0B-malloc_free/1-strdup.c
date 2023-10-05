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
	int i;

	int length = 0;

	char *duplicate;

	if (str == NULL)
	{
		return (NULL);
	}


	while (str[length] != '\0')
		length++;

	duplicate = malloc(sizeof(char) * (length + 1));


	if (duplicate == NULL)
	{
		return (NULL);
	}


	for (i = 0; i < length; i++)
	{

		duplicate[i] = str[i];
	}


	duplicate[length] = '\0';

	return (duplicate);
}

