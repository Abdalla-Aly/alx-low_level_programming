#include <stdio.h>

/**
 * main - print numbers between 00 to 99
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c, d, e, f, op1, op2;

	c = d = e = f = 48;
	while (f < 58)
	{
		e = 48;
		while (e < 58)
		{
			d = 48;
			while (d < 58)
			{
				c = 48;
				while (c < 58)
				{
					op1 = (f * 10) + e;
					op2 = (d * 10) + c;
					if (op1 < op2)
					{
						putchar(f);
						putchar(e);
						putchar(' ');
						putchar(d);
						putchar(c);
					if (f == 57 && e == 56 && d == 57 && c == 57)
					{
						break;
					}
						putchar(',');
						putchar(' ');
					}
					c++;
				}
				d++;
			}
			e++;
		}
		f++;
	}
	putchar('\n');
	return (0);
}
