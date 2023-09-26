#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input_of the function that i deal with it
 * @size: input_of the function that i deal with it
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int sum_1, sum_2, iterator;

	sum_1 = 0;
	sum_2 = 0;

	for (iterator = 0; iterator < size; iterator++)
	{
		sum_1 = sum_1 + a[iterator * size + iterator];
	}

	for (iterator = size - 1; iterator >= 0; iterator--)
	{
		sum_2 += a[iterator * size + (size - iterator - 1)];
	}

	printf("%d, %d\n", sum_1, sum_2);
}
