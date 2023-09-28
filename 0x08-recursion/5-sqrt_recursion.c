#include "main.h"


/**
 * _sqrt_recursion - Entry point
 *
 * @n : is number thr input of the function
 * Return:  ( int value the length of string)  (Success)
 */
int _sqrt_recursion(int n)
{
	int sqrt_candidate;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
		return (n);


	sqrt_candidate = _sqrt_recursion(n / 2);

	if (sqrt_candidate * sqrt_candidate >= n)
		return (sqrt_candidate);

	else
		return (sqrt_candidate + 1);

}
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
