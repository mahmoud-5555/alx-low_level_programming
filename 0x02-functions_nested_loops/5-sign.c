#include "main.h"
/**
 * print_sign - Entry point
 *
 * @n:the input of the function that will be check
 *
 * Return:  (Success)
 */

int print_sign(int n);
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);

	}


}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */


