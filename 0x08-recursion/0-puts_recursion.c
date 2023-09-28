#include "main.h"


/**
 * _puts_recursion - Entry point
 *
 * Return: void ( No return )  (Success)
 */
void _puts_recursion(char *s);
{
	if(*S)
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
