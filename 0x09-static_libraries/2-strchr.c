#include "main.h"
/**
 * *_strchr - locate a char in string
 * @s: string
 * @c: char type
 * Return: char
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
	else
		s++;
	}
	if (*s == c)
		return (s);
	else
		return (0);
}
