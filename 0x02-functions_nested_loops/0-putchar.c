#include <stdio.h>

/**
 * main - printing _putchar
 *
 * Return: Always 0 (Success)
 */

/**
 * _putchar() - writes the character c to stdout
 * @c: The character to print
 *
 * Return: on 1 (Success)
 */
int _putchar(char c);

int main(void)
{
	char ch[8] = {"_putchar"};
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(ch[i]);
	}
	putchar('\n');
	return (0);
}
