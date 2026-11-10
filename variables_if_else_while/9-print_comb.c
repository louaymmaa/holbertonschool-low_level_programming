#include <stdio.h>
/**
 * main - entry point of program
 *
 * Return: 0 on success
 *
 */
int main(void)
{
	int num;

	while (num < 10)
	{
		putchar(num + '0');
		if (num != 9)
		{
			putchar(',');
			putchar (' ');
		}
	}

	putchar('\n');

	return (0);
}

