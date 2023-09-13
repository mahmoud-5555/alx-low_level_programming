#include "main.h"
#include <limits.h>
/**
 * print_last_digit - Entry point
 *
 * @n:the input of the function that will be deal with it
 *
 * Return:  (Success)
 */

int print_last_digit(int n)
{
	int i, res;

	if (n < 0)
		i = -n;
	else
		i = n;
	res = n % 10;

	_putchar(res);
	return (res + '0');

}
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
