#include "main.h"
#include<stdio.h>
/**
 * main - Entry point
 *
 *
 *
 * add two numbers a , b
 *
 * Return:  (Success)
 */

int main(void)
{
	int i, sum;

	sum = 0;
	for (i = 3; i <= 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;
	}
	printf("%i\n", sum);
	return (0);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */


