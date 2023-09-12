#include "main.h"
/**
 * print_last_digit - Entry point
 *
 * @n:the input of the function that will be deal with it
 *
 * Return:  (Success)
 */

int print_last_digit(int n)
{
	int i

	if (n < 0)
		i = n * -1;
	else
		i = n;

	_putchar('0' + (i % 10));
	return (i % 10);

}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */


