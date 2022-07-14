/**
 * _strncpy -  function that copies a string.
 * @dest: destination pointer
 * @src: string to copy
 * @n: amount of bytes to copy
 * Return: pointer of dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char* ptr = dest;
	
	if (dest == 0)
	{
		return 0;
	}
	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return ptr;
}
