#include "main.h"


/**
 * _strlen_recursion - Entry point
 *
 * @s : is string
 * Return:  ( int value the length of string)  (Success)
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
		return (1 + _strlen_recursion(s + 1));

}
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
