#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 *
 * @n: input type integer
 *
 * Return: no return.
 */

void print_line(int n)
{
	int c, i;

	c = 95;
	for (i = 0; i < n; i++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
