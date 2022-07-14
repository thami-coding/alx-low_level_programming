/**
 * _strncpy -  function that copies a string.
 * @dest: destination pointer
 * @src: string to copy
 * @n: amount of bytes to copy
 * Return: pointer of dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
