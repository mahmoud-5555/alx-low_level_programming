#include "main.h"


/**
 * _pow_recursion - Entry point
 *
 * @x : is base
 * @y : is the power
 * Return:  ( int value )  (Success)
 */
int _pow_recursion(int x, int y)
{
	int res;

	if (y == 0)
		return (1);
	else if (y < 0)
	{
		return (-1);
	}
	else if (y % 2 == 0)
	{
		res = _pow_recursion(x, (int) (y / 2));
		return (res * res);
	}
	else if (y % 2 != 0)
		return (x * _pow_recursion(x, y - 1));

	return (0);
}
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
