#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * positive_or_negative - checks if the input is positive or negative
 *
 * @i: input type integer
 *
 * Return: no return
 */

void positive_or_negative(int i)
{
	srand(time(0));
	i = rand() - RAND_MAX / 2;
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negetive\n", i);
	}
	else
	{
		printf("%d is zero\n", i);
	}
}
