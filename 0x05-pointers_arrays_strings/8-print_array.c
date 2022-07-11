#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: variable type int
 * @n: variable type int
 *
 * Return: no return.
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
