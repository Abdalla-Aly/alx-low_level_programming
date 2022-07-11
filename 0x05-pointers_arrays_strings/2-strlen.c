#include "main.h"
#include <string.h>

/**
 * _strlen -  returns the length of a string.
 * @s: varaible type char
 *
 * Return:v length of string.
 */

int _strlen(char *s)
{
	int count;

	count = 0;
	while (*(s + count) != '\0')
	{
		count++;
	}
	return (count);
}
