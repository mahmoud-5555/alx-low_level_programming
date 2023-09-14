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
	unsigned long i, a, b, sum;

	sum = 1;
	a = 1;
	b = 0;
	for (i = 0; i < 50; i++)
	{
		if (i != 49)
			printf("%lu, ", sum);
		else
			printf("%lu", sum);
		b = a;
		a = sum;
		sum = a + b;

	}
	printf("\n");
	return (0);

}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */


