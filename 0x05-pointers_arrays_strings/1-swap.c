#include "main.h"
#include <stdio.h>

/**
 * swap_int - Entry point
 *
 * @a: the input that we deal with it
 * @b: the input that we deal with it
 *
 * Return:  (Success)
 */

void swap_int(int &a, int &b)
{

	int *swi;

	swi = a;
	a = b;
	b = swi;
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
