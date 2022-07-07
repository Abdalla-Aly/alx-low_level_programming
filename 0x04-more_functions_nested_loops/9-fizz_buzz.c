#include <stdio.h>

/**
 * main - prints numbers from 0 to 100 but prints
 * Fizz instead of 3 and buzz instead of 5 multipls
 *
 * Return: Always 0.
 */

int main(void)
{
	int n;

	n = 1;
	printf("%d", n);
	for (n = 0; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (n % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", n);
		}
	}
	printf("\n");
	return (0);
}