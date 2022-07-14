#include "main.h"

/**
 * _strcmp - function that compares two strings.
 * @s1: string to compare
 * @s2: string to compare
 * Return: 0 if strings are the same, -15 if s1 >s2 otherwise 15
 */
int _strcmp(char* s1, char* s2)
{
	int i, j, k;

	i = j = k = 0;

	while (s1[i] != 0)
		i++;

	while (s2[j] != 0)
		j++;

	for (k = 0; k < i; k++)
	{
		if (s1[k] == s2[k])
		{
			if (k == i - 1)
				return 0;
			continue;
		}
		break;
	}

	if (i < j)
		return (-15);

	return (15);
}
