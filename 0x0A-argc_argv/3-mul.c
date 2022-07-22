#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - multiplies two arguments
 * @argc: argument counter
 * @argv: argument vector.
 *
 * Return: 0 in success and 1 i error.
 */
int main(int argc, char *argv[])
{
	int n1, n2, mul;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	mul = n1 * n2;
	printf("%d\n", mul);
	return (0);
}
