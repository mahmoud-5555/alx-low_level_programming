#include<stdio.h>
#include<stdarg.h>
#include"variadic_functions.h"


/**
* print_all - print numbers that in argumint
* @format : num of argumints inputs
*
*/


void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *split = "";
	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", split, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", split, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", split, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", split, str);
					break;
				default:
					i++;
					continue;
			}
			split = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(list);

}

