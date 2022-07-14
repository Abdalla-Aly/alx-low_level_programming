#include <stdio.h>
#include "main.h"

/**
 * _strncpy - copy string.
 * @dest: param one.
 * @src: param two.
 * @n: param 3.
 *
 * Return: retruns sring.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
