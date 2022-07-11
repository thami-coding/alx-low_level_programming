#include "main.h"

/**
 * _puts - a function that prints a string
 * @str: string to print
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != 0)
	{
		char letter = str[i];

		_putchar(letter);
		i++;
	}
	_putchar('\n');
}
