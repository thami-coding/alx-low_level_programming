#include "main.h"


/**
 * print_alphabet - prints alphabets a to z in lowercase
 *
 * Return: returns void (nothing)
 */
void print_alphabet(void)
{
	int i = 97;

	while (i < 123)
	{
		_putchar(i);
		i++;
	}
	_putchar(10);
}
