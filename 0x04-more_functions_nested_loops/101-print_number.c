#include "main.h"
/**
 * print_number - Entry point
 *
 *
 * @n : the input of the function
 *
 * Return:  (Success)
 */

void print_number(int n)
{
	unsigned int value;

	if (n < 0)
	{
		value = -n;
		_putchar('-');
	} else
	{
		value = n;
	}

	if (value / 10)
	{
		print_number(value / 10);
	}

	_putchar((value % 10) + '0');

}
