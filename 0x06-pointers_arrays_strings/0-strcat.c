#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strcat - Entry point
 *
 * @dest : the input that we deal with it
 * @src : the input that we deal with it
 *
 * Return:  (Success)
 */
char *_strcat(char *dest, char *src)
{
	int ln = 0;
	int ln2 = 0;
	int i = 0;
	char *res;

	while (dest[ln] != '\0')
		ln++;
	while (src[ln2] != '\0')
		ln2++;

	res = (char *)malloc(ln + ln2 + 1);

	for (i = 0; i < ln; i++)
		res[i] = dest[i];

	for (i = 0; i < ln2; i++)
		res[ln + i] = src[i];

	res[ln + ln2] = '\0';
	src = res;

	return (res);
}
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
