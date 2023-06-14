#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - a program that adds positive numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char **argv)
{

	int i;
	int sum = 0;

	if (argc <= 1)
	{
		printf("0\n");
	}


	else if (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}

		printf("%d\n", sum);
	}
	return (0);
}
