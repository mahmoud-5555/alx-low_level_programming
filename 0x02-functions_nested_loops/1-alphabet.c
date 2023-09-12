#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Return: no return Always  (Success)
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
		_putchar(i);

	_putchar('\n');
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	print_alphabet();

	return (0);
}
