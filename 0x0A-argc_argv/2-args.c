#include <stdio.h>
#include "main.h"

/**
* main - Entry point
* @argc: int value num of arguoment in main
* @argv: string the argumint
* Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{

		printf("%s\n", argv[i]);

	}


}
