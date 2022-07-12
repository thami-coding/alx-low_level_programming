#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * @str: string to print half of
 * Return void
 */
void puts_half(char *str)
{
	int i, j, n;


	for (i = 0; str[i] != 0; i++)
	{

	}

	if (i % 2 == 0)
	{
		n = i / 2;
	}
	else
	{
		n = (i - 1) / 2;
	}

	i -= 1;
	for (j = n; j <= i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');

}
