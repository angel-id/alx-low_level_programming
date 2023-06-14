#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments given to it
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc __attribute__((unused)), *char argv[])
{
	int i;

	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv);
		}
	}

	return (0);
}
