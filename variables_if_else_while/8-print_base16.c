#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 *
 */
int main(void)
{
	char hexa_digit = '0';

	while (hexa_digit <= '9')
	{
		putchar(hexa_digit);
		hexa_digit++;
	}

	hexa_digit = 'a';

	while (hexa_digit <= 'f')
	{
		putchar(hexa_digit);
		hexa_digit++;
	}
	putchar('\n');

	return (0);
}
