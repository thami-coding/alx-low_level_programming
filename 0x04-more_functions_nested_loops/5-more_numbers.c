#include "main.h"

/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, j, num;

	for (i = 0; i < 10; i++)
	{
		num = 48;
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
			{
				_putchar(49);
				_putchar(num);
				num++;
				continue;
			}
			_putchar(j + '0');
		}
		_putchar('\n');
	}
}
