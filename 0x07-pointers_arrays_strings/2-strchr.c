#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_strchr - Entry point
 *
 * @s : the input that we deal with it
 * @c : the input that we deal with it
 *
 * Return:  (Success)
 */
char *_strchr(char *s, char c)
{


	while (*(s++))
	{
		if (*s == c)
			return (s);

	}
	return (NULL);
}
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
