#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: input string 
 * Return: string;
 */

char *leet(char *s)
{
	int b, a;
	char *x = "aAeEoOtTlL";
	char *y = "4433007711";

	for (b = 0; s[b] != '\0'; b++)
	{
		for (a = 0; a < 10; a++)
		{
			if (s[b] == x[a])
			{		
				s[b] = y[a];
			}
		}
	}
	return (s);
}
