#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares two strings.
 * @s1: varaible int.
 * @s2: varaible type int.
 *
 * Return: return integer.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, op = 0;

	while (op == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
		{
			break;
		}
		op = *(s1 + i) - *(s2 + i);
		i++;
	}
	return (op);
}
