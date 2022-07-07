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
		num = 0;
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
			{
				num = j / 10;
				_putchar(num + '0');
				num = j % 10;
			}
			_putchar(num + '0');
			num++;
		}
		_putchar('\n');
	}
}
