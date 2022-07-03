#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int e, i, f;

	e = i = f = 48;
	while (e < 58)
	{
		i = 48;
		while (i < 58)
		{
			f = 48;
			while (f < 58)
			{
				if (e != i && e < i && i != f && i < f)
				{
					putchar(e);
					putchar(i);
					putchar(f);
					if (f == 57 && i == 56 && e == 55)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
				f++;
			}
			i++;
		}
		e++;
	}
	putchar('\n');
	return (0);
}
