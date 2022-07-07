#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 *
 * @n: input type int
 *
 * Return: no return
 */

void print_diagonal(int n)
{
	int i, j,  c, s;

	c = 92;
	s = 32;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(s);
		}
		_putchar(c);
		if (i < (n - 1))
		{
		_putchar('\n');
		}
	}
	_putchar('\n');
}
