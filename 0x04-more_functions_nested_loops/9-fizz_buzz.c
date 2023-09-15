#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 *
 *
 *
 * Return:  (Success)
 */

int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
			printf("Fizz ");

		else if (i % 5 == 0 && i % 3 != 0)
		{
			if (i != 100)
				printf("Buzz ");
			else
				printf("Buzz");
		}

		else if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else
			printf("%i ", i);
	}
	_putchar('\n');
	return (0);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
