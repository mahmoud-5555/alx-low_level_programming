#include "main.h"

/**
 * print_number - function that print number
 * @n: integer input of the function
 * Return: 0
 */

void print_number(int n)
{
	unsigned int number;

	number = n;

	if (n < 0)
	{
		_putchar('-');

		number = -n;
	}

	if (number / 10 != 0)
	{

		print_number(number / 10);

	}

	_putchar((number % 10) + '0');
}
