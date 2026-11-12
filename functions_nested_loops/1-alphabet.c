#include "main.h"

/**
 * print_alphabet - prints letters from a to z (lowercase)
 *
 * Return: notiong because it is void
 *
 */

void print_alphabet(void)
{
	char letter;
	
	letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');

	return;
}
