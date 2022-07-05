#include "main.h"
/**
 * jack_bauer - prints every minute of the day from 00:00 to 23:59
 *
 * Return: returns void
 */
void jack_bauer(void)
{
	int i, k;

	for (i = 48; i < 51; i++)
	{
		int j = 48;

		for (; j < 52; j++)
		{
			for (k = 48; k < 54; k++)
			{
				int l = 48;

				for (; l < 58; l++)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(l);
					_putchar('\n');
				}
			}
		}
	}
}
