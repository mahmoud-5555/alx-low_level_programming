#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	n = n % 10;
	if (n > 5)
		printf("%i and is greater than 5\n", n);

	else if (n == 0)
		printf("%i and is 0", n);

	else if (n < 6 && n != 0)
		printf("%i and is less than 6 and not 0", n);

	return (0);
}
