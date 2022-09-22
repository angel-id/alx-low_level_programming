#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: string to be encoded
 * Return: string
 */

char *rot13(char *s)
{
	int u, v;
	char x[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char y[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (u = 0; s[u] != '\0'; u++)
	{
		for (v = 0; s[v] != '\0'; v++)
		{
			if  (s[u] == x[v])
			{
				s[u] = y[v];
				break;
			}
		}
	}
	return (s);
}
