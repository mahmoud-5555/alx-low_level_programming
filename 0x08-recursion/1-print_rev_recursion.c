#include "main.h"


/**
 * _print_rev_recursion - Entry point
 *
 * @s : is string
 * Return: void ( No return )  (Success)
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}


}
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
