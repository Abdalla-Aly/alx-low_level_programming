#include <stdio.h>
#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: param type char.
 * @src: param type char.
 * @n: param type int.
 *
 * Return: pointer dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
