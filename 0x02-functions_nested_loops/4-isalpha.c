#include "main.h"
/**
 * _isalpha - Entry point
 *
 * @c:the input of the function that will be check
 *
 * Return: 1 if the char c is alphabtic  (Success)
 */

int _isalpha(int c)
{

	if ((c > 96 && c < 123) || (c > 64 && c < 133))
		return (1);
	return (0);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */


