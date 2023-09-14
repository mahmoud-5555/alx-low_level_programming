#include "main.h"
#include <stdio.h>
/**
 * _isdigit - Entry point
 *
 * @c:the input of the function that will be deal with it
 *
 *
 * Return:  (Success)
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
