#include<stdio.h>
#include<time.h>
#include<stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int number;

	srand(time(0));
	number = rand() % 201 - 100;
	if (number > 0)
		printf("%i: is positive\n", number);

	else if (number == 0)
		printf("%i: is zero\n", number);

	else
		printf("%i: is negative\n", number);

	return (0);
}
