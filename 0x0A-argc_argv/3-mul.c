#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/*
 * main - a program that multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 1
 */

int main(int argc, char *argv[])
{
	int i;
	int mul;

	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
			mul = atoi(argv[1]) * atoi(argv[2]);
		}
		printf("%d\n", mul);
	}

	else if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	return (0);	
}
