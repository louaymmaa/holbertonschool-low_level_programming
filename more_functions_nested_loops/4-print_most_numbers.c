#include "main.h"
/**
 * print_most_numbers - print numbers from 0 to 9 except 2 and 4 followed by new line
 */
void print_most_numbers(void)
{
	char counter;
	char nine;

	counter = '0';
	nine = '9';

	while (counter <= nine)
	{
		if (counter != '2' && counter != '4')
		{
			_putchar(counter);
		}
		counter++;
	}

	_putchar('\n');
}
