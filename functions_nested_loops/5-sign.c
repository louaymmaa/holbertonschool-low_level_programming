#include "main.h"

/**
 * print_sign - print the sign of number wether + or -
 * @n: the number based to have its sign checked
 *
 * Return: 1 on (n>0), 0 on (0=0), and -1 on (n<0)
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return(-1);
	}
}
