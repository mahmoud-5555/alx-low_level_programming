#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;

	scanf("%d", &number);
	if (number > 0)
		printf("%d: is positive\n", number);

	else if (number == 0)
		printf("%d: is zero\n", number);

	else
		printf("%d: is negative\n", number);

	return (0);
}
