#include "main.h"
/**
 * _isdigit - checks if the character digit or not
 * @c: the character that will be checked wither it is digit or not
 *
 * Return: 1 if c is uppercase otherwise 0
 */

int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
