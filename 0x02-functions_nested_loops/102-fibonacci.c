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
	unsigned long i, a, b;

	a = 1;
	b = 0;
	for (i = 0; i < 50; i++)
	{
		if (i != 49)
			printf("%lu, ", a);
		else
			printf("%lu", a);
		b = a;
		a = a + b;

	}
	printf("\n");
	return (0);

}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */


