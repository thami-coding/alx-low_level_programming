/**
 * _strcpy - a function that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 *
 * @dest: A pointer to destination
 * @src: A pointer to source string to copy
 *
 * Return: pointer to a char
 */
char *_strcpy(char *dest, char *src)
{
	char *final_dest = dest;

	while (*src)
		*dest++ = *src++;
	return (final_dest);
}
