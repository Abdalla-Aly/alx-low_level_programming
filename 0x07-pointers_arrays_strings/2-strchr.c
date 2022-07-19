#include <stdio.h>
#include "main.h"

/**
 * _strchr - locates character in a string.
 * @s: param type char.
 * @c: param type char.
 *
 * Return: pointer to s.
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
	if (*(s + i) == c)
	{
		return (s + i);
	}
	return ('\0');
}
