#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: variable type int.
 * @b: variable type int.
 *
 * Return - no return.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

