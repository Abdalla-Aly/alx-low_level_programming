#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with a specific char.
 * @size: size of array.
 * @c: specific char.
 *
 * Return: a pointer to the array (NULL) if it fails or size = 0.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *p;

	if (size == 0)
	{
		return (NULL);
	}
	p = (char *)malloc(sizeof(char) * size);
	if (p == NULL)
	{
		return (0);
	}
	while (i < size)
	{
		*(p + i) = c;
		i++;
	}
	*(p + i) = '\0';
	return (p);
}
