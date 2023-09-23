
#include<stdio.h>
#include "main.h"

/**
 * infinite_add - add 2 numbers together
 *
 *
 * @n1: text representation of 1st number to add(input)
 * @n2: text representation of 2nd number to add(input)
 * @r: pointer to buffer(input)
 * @size_r: buffer size(input)
 *
 *
 * Return: pointer to calling function
 */


char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int over = 0, i = 0, j = 0, dig = 0;
	int val = 0, val2 = 0, temp = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || over == 1)
	{
		if (i < 0)
			val = 0;
		else
			val = *(n1 + i) - '0';
		if (j < 0)
			val2 = 0;
		else
			val2 = *(n2 + j) - '0';
		temp = val + val2 + over;
		if (temp >= 10)
			over = 1;
		else
			over = 0;
		if (dig >= (size_r - 1))
			return (0);
		*(r + dig) = (temp % 10) + '0';
		dig++;
		j--;
		i--;
	}
	if (dig == size_r)
		return (0);
	*(r + dig) = '\0';
	rev_string(r);
	return (r);
}
