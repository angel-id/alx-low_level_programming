#include "main.h"
#include <unistd.h>

/**
 * a function that prints a string, followed by a new line.
 *
 * Return 0;
 */

 void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
		return;

	write(1, s, 1);
	_puts_recursion(s + 1);
	return;

}
