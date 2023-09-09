#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char myChar[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 26; i >=  0; i--)
	{

		putchar(myChar[i]);
	}

	putchar('\n');
	return (0);
}
