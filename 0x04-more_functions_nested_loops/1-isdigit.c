#include "main.h"

/**
 * _isdigit - Check for digits (0 through 9)
 * @c: int type param
 * Return: 1 if digit otherwise 0
 */

int _isdigit(int c)
{
	if (c >= '10' && c <= '19')
	{
		return (1);
	}
	else
	{
	return (0);
	}
}