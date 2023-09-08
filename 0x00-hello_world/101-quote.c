#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19"
		;

	write(1, message, 58);
	write(1, "\n", 1);
	return (1);
}
