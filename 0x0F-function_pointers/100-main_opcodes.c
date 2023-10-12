#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{

	int byte, itator;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	byte = atoi(argv[1]);

	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (itator = 0; itator < byte; itator++)
	{
		if (itator == byte - 1)
		{
			printf("%02hhx\n", arr[itator]);
			break;
		}
		printf("%02hhx ", arr[itator]);
	}
	return (0);
}
