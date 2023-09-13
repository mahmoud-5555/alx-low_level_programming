#include "main.h"
/**
 * jack_bauer - Entry point
 *
 *
 * Return:  (Success)
 */

void jack_bauer(void)
{
	int hr0, hr1, min0, min1, x;

	x = 10;
	for (hr0 = 0; hr0 < 3; hr0++)
	{
		if (hr0 == 2)
			x = 4;

		for (hr1 = 0; hr1 < x; hr1++)
		{
			for (min0 = 0; min0 < 6; min0++)
			{
				for (min1 = 0; min1 < 10; min1++)
				{
					_putchar(hr0 + '0');
					_putchar(hr1 + '0');
					_putchar(':');
					_putchar(min0 + '0');
					_putchar(min1 + '0');
					_putchar('\n');
				}
			}
		}
	}
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */


