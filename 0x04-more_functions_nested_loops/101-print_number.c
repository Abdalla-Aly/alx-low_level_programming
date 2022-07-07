#include "main.h"

/**
 * print_number - prints number
 *
 * @n: input type int
 *
 * Return: no return.
 */

void print_number(int n)
{
	unsigned int m, d, count;

	if (n < 0)
	{
		_putchar(45);
		m = n * -1;
	}
	else
	{
		m = n;
	}
	while (d > 9)
	{
		d = m;
		count = 1;
	}
	for (; count >= 1; count /= 10)
	{
		_putchar(((m / count) % 10) + 48);
	}
}
