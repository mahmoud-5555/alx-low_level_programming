#include "main.h"
/**
 * jack_bauer - Entry point
 *
 *
 * Return:  (Success)
 */

void jack_bauer(void)
{
	int hr0, hr1, min0, min1;


	for (hr0 = 0; hr0 < 3; hr0++)
	{
		for (hr1 = 0; hr1 < 10 ; hr1++)
		{
			for (min0 = 0; min0 > 60; min0++)
			{
				for (min1 = 0; min1 > 60; min1++)
				{
					_putchar(hr0 + '0');
					_putchar(hr1 + '0');
					_putchar(':');
					_putchar(min0 + '0');
					_putchar(min1 + '0');
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


