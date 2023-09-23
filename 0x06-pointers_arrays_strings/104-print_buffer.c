#include "main.h"
#include <stdio.h>

/**
 * print_buffer - function
 * @b: buffer input
 * @size: size input
 * Return: void no return
 */

void print_buffer(char *b, int size)
{
	int l, j, i;

	l = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (l < size)
	{
		j = size - l < 10 ? size - l : 10;
		printf("%08x: ", l);
		for (i = 0; i < 10; i++)
		{
			if (i < j)
				printf("%02x", *(b + l + i));
			else
				printf("  ");
			if (i % 2)
			{
				printf(" ");
			}
		}

