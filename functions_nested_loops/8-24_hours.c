#include "main.h"

/**
 * jack_bauer - print numbers like a watch
 */

void jack_bauer(void)
{
	int min;
	int hours;

	min = 0;
	hours = 0;

	while (hours < 24)
	{

		while (min < 60)
		{
			_putchar('0' + (hours / 10));
			_putchar('0' + (hours % 10));
			_putchar(':');
			_putchar('0' + (min / 10));
			_putchar('0' + (min % 10));
			_putchar('\n');
			min++;
		}
		min = 0;
		hours++;
	}
}
