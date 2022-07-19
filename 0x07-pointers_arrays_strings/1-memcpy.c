/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 *@dest: memoey area to copy data to
 *@src: memory area to copy data from
 *@n: number of bytes to copy
 *Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
