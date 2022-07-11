#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first character, followed by a new line.
 * @str: variable type char.
 *
 * Return: no return.
 */
void puts2(char *str)
{
	int count, i;

	count = 0;
	for (i = 0; i < str[count]; i+=2)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
}
