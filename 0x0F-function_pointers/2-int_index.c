#include "function_pointers.h"

/**
 * int_index -  a function that searches for an integer.
 * @size: size of the array
 * @array: array variable
 * @cmp: pointer to function
 * Return: -1 if no element matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{

		for (i = 0; i < size; i++)
		{

			if (cmp(array[i] != 0))
				return (i);
		}
	}

	return (-1);
}
