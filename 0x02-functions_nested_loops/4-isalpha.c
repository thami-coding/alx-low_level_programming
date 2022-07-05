#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: The character to be checked
 *
 * Return: 1 if the character is an alphabet. 0 otherwise
 */
int _isalpha(int c)
{
	if ((c < 91 && c > 64) || (c < 122 && c > 96))
		return (1);
	else
		return (0);
}
