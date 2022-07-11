#include "main.h"

/**
 * _puts - prints string followed by a new line.
 * &str: varaible type char.
 *
 * Return: no retrun.
 */
void _puts(char *str)
{
	int count;

	count = 0;
	while (count >= 0)
	{
		if (count == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[count]);
		count++;
	}
}
