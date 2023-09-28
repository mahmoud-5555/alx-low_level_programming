#include "main.h"


/**
 * _puts_recursion - Entry point
 *
 * @s : is string
 * Return: void ( No return )  (Success)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

}
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
