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

	va_start(args, n);
	for (itretor = 0; itretor < n; itretor++)
	{
		ptr = va_arg(args, char*);

		if (ptr == NULL)
			printf("(nil)");

		else
			printf("%s", ptr);

		if (itretor != (n - 1))
			printf("%s", separator);
	}
	putchar('\n');
	va_end(args);
}
