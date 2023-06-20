#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat -  a function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: pointer if success or NULL if fail.
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int i;
	int j;
	int k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/* get the size of the strings*/

	for (i = 0; i < s1[i] != '\0'; i++)
		;
	for (j = 0; j < s2[j] != '\0'; j++)
		;
	/*allocate memory for both strings s1 and s2*/

	str = (char *)malloc(sizeof(char) * (i + 1 + (j)));

	if (str == NULL)
		return (NULL);

	k = 0;
	while (k < i)
	{
		str[k] = s1[k];
		k++;
	}

	k = 0;
	while (k < j)
	{
		str[i + k] = s2[k];
		k++;
	}
	str[i + j] = '\0';


	return (str);
}
