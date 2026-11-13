#include "main.h"

/**
 * _islower - check where the letter it takes is lowercase or not
 * @c: the number that represent the character expected from main.c
 * Return: 1 on lowercase letter, 0 otherwise
 *
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
