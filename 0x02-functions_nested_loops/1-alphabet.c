#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints alphabet in lowerCase
 *
 * Return: Always 0 (Success)
 */
void  print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	putchar('\n');
}
