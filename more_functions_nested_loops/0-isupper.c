#include "main.h"
/**
 * _isupper - checks if the charachter is a uppercase letter
 * @c: character sends
 *
 * Returns: 1 if c is uppercase otherwise 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
