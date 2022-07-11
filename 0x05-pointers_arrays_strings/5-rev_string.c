#include "main.h"
/**
 * rev_string - a function that reverses a string
 * @s: string to reverse
 * Return: void
 */
void rev_string(char *s)
{
	int i, j, k, l;

	char rev[200];

	k = 0;

	for (i = 0; s[i] != 0; i++)
	{
	}

	for (j = i - 1; j >= 0; j--)
	{
		rev[k] = s[j];
		k++;
	}
	for (l = 0; s[l] != 0; l++)
	{
		s[l] = rev[l];
	}
}
