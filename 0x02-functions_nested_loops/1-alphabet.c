#include "main.h"

/**
 * main - a program that prints the 
 * alphabet in lowercase using '_putchar'
 * Return: 0
 */

void print_alphabet(void)
{
	char alpha;
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchat(alpha);
	}

	_putchar('\n');
	
}
