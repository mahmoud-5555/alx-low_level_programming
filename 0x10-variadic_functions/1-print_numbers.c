#include<stdio.h>
#include<stdarg.h>
#include"variadic_functions.h"

/**
* print_numbers - print numbers that in argumint
* @n : num of argumints inputs
* @separator : sprint elemint number by it
* Return: void no return
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int i;
	unsigned int itretor;

	va_start(args, n);
	for (itretor = 0; itretor < n; itretor++)
	{
		print_num(va_arg(args, int));
		if (itretor != (n - 1))
		{
			i = 0;
			while (*(separator + i) != '\0')
			{
				_putchar(*(separator + i));
				i++;
			}

		}
	}
	_putchar('\n');
	va_end(args);

}

/**
* print_num - print numbers that in argumint
* @n : num intger what we wnna to print
* Return: void no return
*/
int print_num(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = n * -1;
	}
	else
		num = n;

	if (num != 0)
	{
		print_num(num / 10);
		_putchar('0' + (num % 10));
	}


	return (0);
}