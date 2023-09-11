#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j, k, l, x;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			x = j + 1;

			for (k = i; k < 58; k++)
			{
				for (l = x; l < 58; l++)
				{
					if (i != k || j != l)
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(l);
					}
					if (i != 57 || j != 56 || k != 57 || l != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
				x = 48;
			}
		}
	}
	putchar('\n');
	return (0);
}
