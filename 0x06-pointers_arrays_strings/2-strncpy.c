/**
 * *_strncpy - copies a string
 * @dest: 1st str
 * @src: char
 * @n: int
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (i < 0)
	{
		for (; i < n; i++)
		
		dest[i] = '\0';
		
	}
	return (dest);
}
