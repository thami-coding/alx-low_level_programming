#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k;

	i = j = 48;
	k = 49;

	while (i <= 57)
	{
		if (i != 57)
		{
			j = k++;
		}
	while (j <= 57)
	{
		putchar(i);
		putchar(j);
		if (i != 56)
		{
			putchar(44);
			putchar(32);
		}
		j++;
	}
	i++;
	}
	putchar(10);
	return (0);
}
