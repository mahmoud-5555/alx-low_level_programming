#include "main.h"
#include <stdio.h>
/**
 * _isupper - Entry point
 *
 * @c:the input of the function that will be deal with it
 *
 *
 * Return:  (Success)
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c >= 'Z'))
		return (1);
	else
		return (0);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
