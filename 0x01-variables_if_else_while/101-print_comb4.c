#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, l, m, n;

	i = 48;
	m = 50;
	n = 49;

	for (; i <= 55; i++)
	{
		j = n++;
		l = m++;
		for (; j <= 57; j++)
		{
			k = l++;
			for (; k <= 57; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i != 55 || k != 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}

