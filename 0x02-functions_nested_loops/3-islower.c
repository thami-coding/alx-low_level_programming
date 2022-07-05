#include "main.h"

/**
 * _islower - checks for lowercase
 * @c: The number to be checked
 *
 * Return: 1 if c is lowercase. 0 otherwise
 */
int _islower(int c)
{
	if (c < 123 && c > 96)
		return (1);
	else
		return (0);
}

