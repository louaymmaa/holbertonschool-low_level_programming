#include "main.h"

/**
 * times_table - print the times table
 */
void times_table(void)
{
	int current_multiplier;
       	int current_multiplication_table;

	current_multiplication_table = 0;
	current_multiplier = 0;
	
	while (current_multiplication_table < 10)
	{
		while (current_multiplier < 9)
		{
			int result = current_multiplier * current_multiplication_table;
			int res_tens = result / 10;
			int res_ons = result % 10;
			if (res_tens != 0)
			{
				_putchar('0' + res_tens);
				_putchar('0' + res_ons);
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('0' + res_ons);
				_putchar(',');
			       	_putchar(' ');
				_putchar(' ');
			}
			current_multiplier++;
		}
		if ((current_multiplier * current_multiplication_table) / 10 != 0)
		{
			_putchar('0' + ((current_multiplier * current_multiplication_table) / 10));
			_putchar('0' + ((current_multiplier * current_multiplication_table) % 10));
		}
		else
		{
			_putchar('0' + ((current_multiplier * current_multiplication_table) % 10));
		}
		_putchar('\n');
		current_multiplier = 0;
		current_multiplication_table++;
	}
}
