#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 97, m = 123;

	while (n <= m)
	{
		if (n == 123)
		{
			n = 65;
			m = 90;
		}
		putchar(n);
		n++;
	}
	putchar(10);
	return (0);
}
