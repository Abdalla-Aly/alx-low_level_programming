#include <stdio.h>
#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: param one.
 * @n: param two.
 *
 * Return: no return.
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = n - 1; i >= a[1]; i--)
	{
		if (i != 0 && i != n -1)
		{
			printf(", ");
		}
		printf("%d", a[i]);
	}
	printf("\n");
}
