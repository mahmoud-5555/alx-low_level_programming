#include<stdio.h>
#include<stdarg.h>
#include"main.h"

/**
* print_numbers - sum argumints
* @n : num of argumints inputs
* @separator : sprint elemint number by it
* Return: void no return
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int itretor;

	va_start(args, n);
	for (itretor = 0; itretor < n; itretor++)
	{
		printf("%i", va_arg(args, int));

		if (itretor != (n - 1))
			printf("%s", separator);
	}
	putchar('\n');
	va_end(args);

}

