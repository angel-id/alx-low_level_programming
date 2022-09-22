#include <stdio.h>

/**
 * main - Prints the first 50 fibonacci numbers
 * Return: Always 0.
 */

int main(void)
{
	int i;
	long int num1, num2, fibn;

	num1 = 1;
	num2 = 2;
	printf("%ld, %ld", num1, num2);
	for (i = 0; i < 48; i++)
	{
		fibn = num1 + num2;
		printf(", %ld", fibn);
		num1 = num2;
		num2 = fibn;
	}
	printf("\n");
	return (0);
}
