#include "main.h"
#include <stdio.h>
/**
 * _strcpy - function for
 * @dest: buffer pointed
 * @src:  string pointed to by 
 * *_strcpy - function that
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < src[i]; i++)
		dest[i] = '\0';
return (dest);
}
