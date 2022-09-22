#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2 follpwed bu newline
 * Return: 0 (Success)
 */

int main(void)
{
	unsigned long int l, m, n, j1, j2, k1, k2;

	m = 1;
	n = 2;
	printf("%lu", m);
	for (l = 1; l < 91; l++)
	{
		printf(", %lu", n);
		n = n + m;
		m = n - m;
	}
	j1 = m / 1000000000;
	j2 = m % 1000000000;
	k1 = n / 1000000000;
	k2 = n % 1000000000;
	for (l = 92; l < 99; ++l)
	{
		printf(", %lu", k1 + (k2 / 1000000000));
		printf("%lu", k2 % 1000000000);
		k1 = k1 + j1;
		j1 = k1 - j1;
		k2 = k2 + j2;
		j2 = k2 - j2;
	}
	printf("\n");
	return (0);
}
