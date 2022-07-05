#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercae.
 *
 * Return: reurns void
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		int j = 97;

		while (j < 123)
		{
			_putchar(j);
			j++;
		}
		_putchar(10);
		i++;
	}
}
