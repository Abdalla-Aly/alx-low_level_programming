#include "main.h"

/**
 * isalpha - shows 1 if the input is
 * a character otherwise shows 0
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for characters 0 for the rest.
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if  (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	putchar('\n');
}
