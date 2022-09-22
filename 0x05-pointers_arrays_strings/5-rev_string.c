#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: 0
 */

void rev_string(char *s)
{	char ggg;
	int i, j, k;

	j = 0;
	k = 0;
	while (s[j] != '\0')				
	{
		j++;
	}
	k = j - 1;

	for (i = 0; i < j / 2; i++)
	{
		ggg = s[i];
		s[i] = s[k];
		s[k--] = ggg;
	}
}
