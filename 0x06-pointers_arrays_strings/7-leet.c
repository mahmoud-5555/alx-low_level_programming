#include "main.h"
/**
 * leet - function
 * @n: input value
 * Return: n value
 */

char *leet(char *n)
{
	int loop, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (loop = 0; n[loop] != '\0'; loop++)
	{

		for (j = 0; j < 10; j++)
		{

			if (n[loop] == s1[j])
			{
				n[loop] = s2[j];
			}

		}

	}

	return (n);
}

