#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 48, m = 57;

	while (n <= m)
	{
		putchar(n);
		if (n == 57)
		{
			n = 97;
			m = 102;
			continue;
		}
		n++;
	}
	putchar(10);
	return (0);
}
