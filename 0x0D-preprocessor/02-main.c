#include <stdio.h>

/**
 * main - prints the file it was compiled from.
 *
 * Return: Always 0.
 */
int main()
{
	printf("%s\n", __FILE__);
	return 0;
}