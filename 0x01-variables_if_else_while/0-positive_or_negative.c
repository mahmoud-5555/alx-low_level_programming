#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long number;

	scanf("%ld", &number);
	if (number >= 0)
		printf("%ld: is positive\n", number);
	else
		printf("%ld: is negative\n", number);

	return (0);
}
