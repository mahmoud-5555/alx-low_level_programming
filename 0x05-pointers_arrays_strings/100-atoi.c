#include "main.h"
#include <stdio.h>

/**
 * __atoi - function that convite string -> int
 *
 *
 * @s: input of the function (to)
 * Return: int
 */

int _atoi(char *s)
{
	int ln = 0;
	int num = 0;
	int sign = 1;
	int it = 0;
	int i;
	int ordaer = 1;

	while (*(s + ln) != '\0')
	{
		ln++;
	}
	if (*s == '\0' )
		return (0);

	else if (*s == '-')
	{
		sign = -1;
		it = 1;
	}

	for ( ; it < ln; it++)
	{
		ordaer = 1;
		for (i = 0; i < (ln - it -1), i++)
			ordaer *= 10;
		num += num + (ordaer * (s[it] - '0'));
	}
	return (num * sign);
}
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
