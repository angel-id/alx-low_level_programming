#include "main.h"

/**
 * _abs - a function that prints absolute value of an integer
 * @a: the int to input
 * Return: absolute value
 */ 
int _abs(int a)
{
	if (a >= 0)
	{
		return (a);
	}
	else 
	{
		return (a * -1);
	}
}
