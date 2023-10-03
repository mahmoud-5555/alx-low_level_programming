#include "main.h"
#include <stdio.h>

/**
 * _atoi - function that convite string -> int
 *
 *
 * @s: input of the function (to)
 * Return: int
 */

int _atoi(char *s)
{
	int ln = 0, sign = 1, it = 0, i;
	int order = 1, start = 0, end = 0, s_num = 1;
	int stop = 1;
	unsigned int  num = 0;

	if (s[0] == '\0')
		return (0);
	while (s[ln] != '\0')
	{
		if ((s_num) && ((s[ln] >= '0') && (s[ln] <= '9')))
		{
			s_num = 0;
			start = ln;
		}
		if (!((s[ln] >= '0') && (s[ln] <= '9')) &&  !s_num)
			stop = 0;
		if (s[ln] == '-' && stop)
			sign *= -1;
		if (stop)
			end = ln;
		ln++;
	}
	if (s_num)
		return (0);
	for (it = start ; it <= end; it++)
	{		order = 1;
		for (i = start - (start - it); i < end; i++)
			order *= 10;
		num += (order * (s[it] - '0'));
	}
	return (num * sign);
}
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
