#include "main.h"


/**
 * factorial - Entry point
 *
 * @n : is number thr input of the function
 * Return:  ( int value the length of string)  (Success)
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));

}
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
