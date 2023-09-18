#include "main.h"
#include <stdio.h>

/**
 * print_rev - Entry point
 *
 * @s: the input that we deal with it
 *
 * Return:  (Success)
 */

void print_rev(char *s)
{

	if (*s != '\0')
		print_rev(s + 1);
	putchar(*s);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
