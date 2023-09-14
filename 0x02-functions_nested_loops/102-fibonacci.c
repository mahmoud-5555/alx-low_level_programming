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
	unsigned long i, sum;

	sum = 1;
	for (i = 0; i < 50; i++)
	{
		if (i != 49)
			printf("%lu, ", sum);
		else
			printf("%lu", sum);
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


