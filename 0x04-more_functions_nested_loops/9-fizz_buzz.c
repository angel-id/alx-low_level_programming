#include <stdio.h>

/**
 * main - prints "Fizz" for multiples of '3',
 * prints "Buzz" for multiples of '5' and
 * prints "FizzBuzz" for multiples of '3' and '5'.
 * Return: 0
 */

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz ");
		}
		else
			printf("%d ", a);
	}
	printf("\n");
	return (0);
}
