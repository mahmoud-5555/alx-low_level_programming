#include "main.h"
/**
 * main  - Entry point
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

	sum = 1;
	for (i = 0; i < 50; i++)
	{

		printf("%i, ", sum);
		sum += sum;

	}
	printf("\n");
	return (0);

}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */


