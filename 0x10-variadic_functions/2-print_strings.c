#include<stdarg.h>
#include <stdio.h>
#include"variadic_functions.h"

/**
* print_strings - sum argumints
* @n : num of argumints inputs
* @separator : sprint elemint number by it
* Return: void no return
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
	const char *word = va_arg(args, const char *);

		if (word == NULL)
			printf("(nil)");

		else
			printf("%s", word);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);

	}

	va_end(args);
	printf("\n");
}


