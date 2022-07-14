#include "main.h"

/**
 * _strcat -  a function that concatenates two strings.
 * @dest: destination string
 * @src: string to concatenate to destination
 * Return: character pointer
 */
char *_strcat(char *dest, char *src)
{
	int i, j, l, len, k;

	len = i = j = l = 0;

	while (dest[i] != 0)
		i++;

	while (src[j] != 0)
		j++;

	len = i + j;
	for (k = i; k < len; k++)
		dest[k] = src[l++];
	return (dest);
}
