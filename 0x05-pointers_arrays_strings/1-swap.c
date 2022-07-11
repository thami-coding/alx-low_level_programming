#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 * @a: first value to swap
 * @b: second value to swap
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
