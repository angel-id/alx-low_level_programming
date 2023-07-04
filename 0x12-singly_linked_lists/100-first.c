#include <stdio.h>

/**
 * before_main - a function that prints before the main function is executed.
 * Return: nothing
 */

void __attribute__ ((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
