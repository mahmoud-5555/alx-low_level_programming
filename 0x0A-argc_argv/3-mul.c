#include <stdio.h>
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int itritor = 0, sign = 0, n = 0, length = 0, f = 0, digit = 0;

	while (s[length] != '\0')
		length++;

	while (itritor < length && f == 0)
	{
		if (s[itritor] == '-')
			++sign;

		if (s[itritor] >= '0' && s[itritor] <= '9')
		{
			digit = s[itritor] - '0';
			if (sign % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[itritor + 1] < '0' || s[itritor + 1] > '9')
				break;
			f = 0;
		}
		itritor++;
	}
	if (f == 0)
		return (0);

	return (n);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%sign\n", result);

	return (0);
}
