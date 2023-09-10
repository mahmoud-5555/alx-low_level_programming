#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j, x, y, k;

	x = 48;
	y = 48;
	for (i = 48; i < 58; i++)
	{
		for (j = x; j < 58; j++)
		{
			for (k = y ; k < 58; k++)
			{
				if (i != j && i != k && j != k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
				}
				if (i != 56 && i != j && i != k && j != k)
				{
				putchar(',');
				putchar(' ');
				}
			}

		}
		x = x + 1;
		y = y + 1;
	}

	putchar('\n');
	return (0);
}
