#include <stdarg.h>

/**
 * sum_them_all - sums all of its arguments
 * @n: number of arguments.
 *
 * Return: sum of the arguments.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list ap;
	va_start(ap, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
