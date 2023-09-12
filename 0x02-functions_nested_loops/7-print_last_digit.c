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
	if (n < 0)
		n = n * -1;

	_putchar('0' + (n % 10));
	return (n % 10);

}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */


