#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @n: print last digit of n
 *
 * Return: last digit of n.
 */
int print_last_digit(int n)
{
	int last_digit, ld;

	if (n < 0)
		n = n * -1;
	last_digit = n % 10;
	if (last_digit == 0)
		ld = 48;
	else if (last_digit == 1)
		ld = 49;
	else if (last_digit == 2)
		ld = 50;
	else if (last_digit == 3)
		ld = 51;
	else if (last_digit == 4)
		ld = 52;
	else if (last_digit == 5)
		ld = 53;
	else if (last_digit == 6)
		ld = 54;
	else if (last_digit == 7)
		ld = 55;
	else if (last_digit == 8)
		ld = 56;
	else if (last_digit == 9)
		ld = 57;
	else
		_putchar('?');
	_putchar(ld);
	return (last_digit);
}
