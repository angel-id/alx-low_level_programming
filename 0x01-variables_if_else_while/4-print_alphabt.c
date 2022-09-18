#include <stdio.h>
/**
 * main - to print lower case alphabets except c and q
 * Return: 0
 */
int main(void)
{
	char ch = 'a';
	while (ch <= 'z')
{	putchar(ch);
	
	if (ch != 'e' && ch != 'q')
{	putchar(ch)
}
	ch++;
}

putchar('\n');
return (0);
}

