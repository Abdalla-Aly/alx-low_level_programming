#include "main.h"

/**
 * factorial - prints factorial of given number.
 * @n: integer param.
 *
 * Return: factorial of given num.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1 || n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
