/**
 * *_strncpy - copies a string
 * @dest: 1st str
 * @src: char
 * @n: int
 * Return: char.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
