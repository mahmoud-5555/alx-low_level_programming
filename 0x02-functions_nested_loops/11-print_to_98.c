#include "main.h"
/**
 * print_to_98  - Entry point
 *
 * @n:the input of the function that will be deal with it
 *
 *
 * Return:  (Success)
 */

void print_to_98(int n)
{
	int i = 0;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
			{
				printf("%i, ", i);
			}
			else
				printf("%i", i);
		}
		printf("\n");
	}
	else
	{

		for (i = n; i >= 98; i--)
		{
			if (i != 98)
				printf("%i, ", i);
			else
				printf("%i", i);
		}
		printf("\n");
	}

}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */


