#include "main.h"
#include<stdio.h>
/**
 * times_table - Entry point
 *
 *
 * Return:  (Success)
 */

void times_table(void)
{
	int j, i, res;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			res = j * i;
			if (j != 9)
			{
			if (res < 10)
				printf(" %i, ", res);
			else
				printf("%i, ", res);
			}
			else
			{
			if (res < 10)
				printf(" %i", res);
			else
				printf("%i", res);
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
