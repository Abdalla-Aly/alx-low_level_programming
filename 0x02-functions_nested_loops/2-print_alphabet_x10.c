#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet in lower case 10 times
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int i, j;

	i = 0;
	while (i < 10)
	{
		j = 97;
		while (j < 123)
		{
			_putchar(j);
			j++;
		}
		putchar('\n');
		i++;
	}
}
