#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * to the buffer pointed to by dest.
 * @dest: variable type char.
 * @src: variable type char.
 *
 * Return: Return value the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int count;

	count = 0;
	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
		{
			break;
		}
		count++;
	}
	return (dest);
}
