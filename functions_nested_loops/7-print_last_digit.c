#include "main.h"

/**
 * print_last_digit - print last digit of number
 * @num: number passed
 *
 * Return: value of value of last digit
 */

int print_last_digit(int num)
{
	num %= 10;

	if (num < 0)
		num *= -1;

	_putchar('0' + num);

	return (num);
}
