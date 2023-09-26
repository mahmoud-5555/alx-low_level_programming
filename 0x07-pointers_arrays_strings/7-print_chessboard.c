#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_chessboard - Entry point
 *
 * @a : the input that we deal with it
 *
 *
 * Return:  (Success)
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
