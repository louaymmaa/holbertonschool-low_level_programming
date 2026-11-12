#include "main.h"

/**
 * print_alphabet_x10 - prints letters from a to z (lowercase) 10 times
 *
 */

void print_alphabet_x10(void)
{
	char letter;
	int counter;

	counter = 1;

while (counter <= 10)
	{
		letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		counter++;
		_putchar('\n');
	}

}
