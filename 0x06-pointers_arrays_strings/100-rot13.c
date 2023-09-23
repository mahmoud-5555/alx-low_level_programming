#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @s: pointer to string params
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int lo;
	int lo2;
	char *data = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *datarot = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (lo = 0; s[lo] != '\0'; lo++)
	{
		for (lo2 = 0; lo2 < 52; lo2++)
		{
			if (s[lo] == data[lo2])
			{
				s[lo] = datarot[lo2];
				break;
			}

		}

	}

	return (s);
}

