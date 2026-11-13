#include "main.h"

/**
 * _isalpha - checks wither the int based represent letter in ASCII or not
 * @c: represent the number of character based in ASCII
 *
 * Return: 1 on alphabet characters (letter), 0 otherwise
 *
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
