#include "main.h"
/**
 * _strlen - function that count strings
 * @s: char pointer
 * Return: the num of the string
 */
int _strlen(char *s)
{
	int i;

	while (*(s + i) != '\0')
	{
		i++;
	}
return (i);
}
