#include "main.h"
#include <stdio.h>

/*
 * _memset - a program that fills the memory
 * space with a constant byte to gain control of the memory
 *
 * @s: memory area to fill
 * @b: constant byte to fill
 * @n: bytes of memory area to fill
 * Description: Fill the first `n` bytes of the memory area pointed to by `s`
 * with the constant byte `b`
 *
 * Return: a pointer to memory area `s`
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int memory = 0;

	while (memory < n)
	{
		s[memory] = b;
		memory++;
	}

	return(s);
}
