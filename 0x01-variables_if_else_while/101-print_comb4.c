#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j, x, y, k, n;

	x = 49;
	y = 50;
	for (i = 48; i < 58; i++)
	{
		n = y;
		for (j = x; j < 58; j++)
		{
			for (k = n ; k < 58; k++)
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
			n += 1;

		}
		x = x + 1;
		y = y + 2;
	}

	putchar('\n');
	return (0);
}
