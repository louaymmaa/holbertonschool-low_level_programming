#include "main.h"
/**
 * print_numbers - print numbers from 0 to 9 followed by new line
 */
void print_numbers(void)
{
	char counter;
	char nine;

	counter = '0';
	nine = '9';

	while (counter <= nine)
	{
		_putchar(counter);
		counter++;
	}

	_putchar('\n');
}