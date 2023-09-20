#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strcmp - Entry point
 *
 * @s1 : the input that we deal with it
 * @s2 : the input that we deal with it
 *
 * Return:  (Success)
 */
int _strcmp(char *s1, char *s2)
{
	int ln = 0;
	int res = 0;


	while ((s1[ln] != '\0') && (s2[ln] != '\0'))
	{

		if (s1[ln] > s2[ln])
			res++;

		else if (s1[ln] < s2[ln])
			res--;

		ln++;

	}
	return (res);
}
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
