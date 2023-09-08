#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long long number;

	scanf("%lld", &number);
	if (number > 0)
		printf("%lld: is positive\n", (long long)number);

	else if (number == 0)
		printf("%lld: is zero\n", (long long)number);

	else
		printf("%lld: is negative\n", (long long)number);

	return (0);
}
