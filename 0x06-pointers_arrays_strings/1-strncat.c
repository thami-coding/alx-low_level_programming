#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * a function that concatenates two strings
 * a function that concatenates two strings
 * @dest: destination string
 * @src: string to concatenate to destination
 * @n: number of bytes from src
 * Return: Return a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, k;

	i = j = 0;

	while (dest[i] != 0)
		i++;

	while (src[j] != 0)
		j++;

	for (k = 0; k < n; k++)
	{
		if (k == j)
		{
			break;
		}
		dest[i++] = src[k];
	}
	return (dest);
}
