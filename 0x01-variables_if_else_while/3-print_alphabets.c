#include <stdio.h>
/**
 * main - program that prints lower and upper case alphabets
 * Return: 0
 */

int main(void)
{
	char lalpha = 'a';
	char ualpha = 'A';

	while (lalpha <= 'z')
{
		putchar(lalpha);
		lalpha++;
}
	while (ualpha <= 'Z')
{

		putchar(ualpha);
		ualpha++;
}

putchar('\n');
return (0);
}
