#include "main.h"

/** 
 * print_sign - print + if n is greater than zero
 * prints 0 if n = 0 prints - if n is less than zero
 *
 * @n: integer value
 *
 * Return: 1 if + and -1 if - and 0 if 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	putchar('\n');
}
