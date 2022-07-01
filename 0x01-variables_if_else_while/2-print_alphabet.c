#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int alpha_code = 97;

	while (alpha_code < 123)
	{
		putchar(alpha_code);
		alpha_code++;
	}
	putchar(13);
	return (0);
}

