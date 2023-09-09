#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char myChar[] = "abcdefghigklmnopqrstuvwxyz";
	int i;

	for (i = 0 ; i < 26 ; i++)
	{

		putchar(myChar[i]);
		putchar('\n');

	}

	return (0);
}
