#include<stdio.h>
#include<stdarg.h>
#include"main.h"

/**
* print_strings - sum argumints
* @n : num of argumints inputs
* @separator : sprint elemint number by it
* Return: void no return
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int itretor;
	char *ptr;
	int i;
	char massige[] = "(nil)";

	va_start(args, n);
	for (itretor = 0; itretor < n; itretor++)
	{
		ptr = va_arg(args, char*);
		if (massige[i] == '\0')
		{
			i = 0;
			while (massige[i] != '\0')
			{
				_putchar(*(ptr + i));
				i++;
			}
		}
		else
		{
			i = 0;
			while (*(ptr + i) != '\0')
			{
				_putchar(*(ptr + i));
				i++;
			}
		}
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


