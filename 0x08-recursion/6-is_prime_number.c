#include "main.h"


/**
 * is_prime_recursion - Entry point
 * @divisor : in input
 * @n : is number thr input of the function
 * Return:  ( int value the length of string)  (Success)
 */
int is_prime_recursion(int n, int divisor)
{
	if (divisor == 2)
		return (1);

	if (n % divisor == 0)
		return (0);

	return (is_prime_recursion(n, divisor - 1));
}

/**
 * is_prime_number - Entry point
 *
 * @n : is number thr input of the function
 * Return:  ( int value the length of string)  (Success)
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (is_prime_recursion(n, n - 1));

}
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
