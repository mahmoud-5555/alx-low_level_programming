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
	int a;

	if (n < 0)
		n = -n;

	a = n % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');
	return (a);
}
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
