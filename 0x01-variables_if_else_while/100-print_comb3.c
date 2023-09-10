#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j, x;

	x = 48;
	for (i = 48; i < 58; i++)
	{
		for (j = x; j < 58; j++)
		{
			if (i != j)
			{
				putchar(i);
				putchar(j);
			}
			if (i != 56 && i != j)
			{
				putchar(',');
				putchar(' ');
			}

		}
		x = x + 1;
	}

	putchar('\n');
	return (0);
}
