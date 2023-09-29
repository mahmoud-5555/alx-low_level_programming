#include "main.h"


/**
 * _pow_recursion - Entry point
 * @x : in input
 * @y : is number thr input of the function
 * Return:  ( int value the length of string)  (Success)
 */
int _pow_recursion(int x, int y)
{
	if (y * y == x)
		return (y);
	if (y * y > x)
		return (-1);
	return (_pow_recursion(x, y + 1));
}

/**
 * _sqrt_recursion - Entry point
 *
 * @n : is number thr input of the function
 * Return:  ( int value the length of string)  (Success)
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	return (_pow_recursion(n, 1));

}
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
