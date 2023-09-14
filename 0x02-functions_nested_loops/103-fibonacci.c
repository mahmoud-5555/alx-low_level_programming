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
	unsigned long a, b, sum, res;

	sum = 1;
	a = 1;
	b = 0;
	res = 0;
	while (sum < 4000000)
	{
		if (sum % 2 == 0)
			res += sum;
		b = a;
		a = sum;
		sum = a + b;

	}
	printf("%lu\n", res);
	return (0);

}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */


