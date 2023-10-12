#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - Prints the result of simple operations.
 * @argc: number of arguments
 * @argv: An array of arguments.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{

	int num1, num2;
	char *oparation;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	oparation = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(oparation) == NULL || oparation[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*oparation == '/' && num2 == 0) || (*oparation == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(oparation)(num1, num2));

	return (0);
}
