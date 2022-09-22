#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @str: inputed string
 * Return: str
 */

char *cap_string(char *str)
{
	int i, c;
	int trig;
	char nots[] = ",;.!?(){}\n\t\" ";

	for (i = 0, trig = 0; str[i] != '\0'; i++)
	{
		if (str[0] > 96 && str[0] < 123)
		{
			trig = 1;
		}
		for (c = 0; nots[c] != '\0'; c++)
		{
			if (nots[c] == str[i])
			trig= 1;
		}
		if (trig)
		{
			if (str[i] > 96 && str[i] < 123)
			{	
				str[i] -= 32;
				trig = 0;	
				{
					else if (str[i] > 64 && str[i] < 91)
					{
						trig = 0;
					}
					else if (str[i] > 47 && str[i] < 58)
					{
						trig = 0;
					}
				}
			}
		}
		return (str);
	}
}
