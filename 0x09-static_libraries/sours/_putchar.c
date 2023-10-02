#include <unistd.h>
#include "main.h"

/**
* _putchar - Entry point
* @c :input of function
* Return: Always 0 (Success)
*/

int _putchar(char c)
{
	write(1, &c, 1);

	return (0);
}
