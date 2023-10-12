#include<stdarg.h>
#include"main.h"
/**
* sum_them_all - sum argumints
* @n : num of argumints inputs
* Return: intger the sumtion of the arhumints
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);
	return (sum);

}
