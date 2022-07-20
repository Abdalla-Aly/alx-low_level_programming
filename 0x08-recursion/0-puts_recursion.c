#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints string.
 * @s: the string.
 *
 * Return: nothing.
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (*(s + i) > '\0')
	{
		_putchar("%s", s);
	}
	_putchar('\n');
}
