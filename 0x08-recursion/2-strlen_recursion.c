#include "main.h"
#include <unistd.h>

/**
 * _strlen_recursion - a function that prints the string length
 * @s: pointer type param
 * Return: 0.
 */

int _strlen_recursion(char *s)
{
	int a = 0;

	if (*s == '\0')
	return (0);

	else

		a = _strlen_recursion(s + 1);
	return (a + 1);

}
