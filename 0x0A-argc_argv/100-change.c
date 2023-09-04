#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the minimum
 * number of coins to make change
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 * and 1 on failure.
 */

int main(int argc, char *argv[])
{
	int change, cent = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	change = atoi(argv[1]);

	while (change > 0)
	{
		if (change >= 25)
			change -= 25;

		else if (change >= 10)
			change -= 10;

		else if (change >= 5)
			change -= 5;

		else if (change >= 2)
			change -= 2;

		else if (change >= 1)
			change -= 1;
		cent += 1;
	}

	printf("%d\n", cent);

	return (0);
}
