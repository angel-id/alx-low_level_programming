#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: int type array pointer
 * @n: int type int
 * Return: 0
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
