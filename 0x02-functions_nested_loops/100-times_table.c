#include "main.h"
#include<stdio.h>
/**
 * print_times_table - Entry point
 *
 *@n:  is the int that will use for the argument of the function
 * Return:  (Success)
 */

void print_times_table(int n)
{
	int j, i, res;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n ; j++)
		{
			res = j * i;
			if (j != n && j != 0)
			{
				if (res < 10)
					printf("   %i, ", res);
				else
					printf("  %i, ", res);
			}
			else if (j == 0)
			{
				printf("%i, ", res);
			}
			else
			{
			if (res < 10)
				printf("   %i", res);
			else
				printf("  %i", res);
			}
		}
		printf("\n");
	}
}
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
