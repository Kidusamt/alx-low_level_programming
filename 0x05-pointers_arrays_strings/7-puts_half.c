#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line
 * @str: pointer
 */
void puts_half(char *str)
{
	int i, l;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	l = i;
	if (l % 2 != 0)
		l = (l + 1) / 2;
	else 
		l /= 2;
	while (l < i)
	{
		l++;
		_putchar(*(str + l - 1));
	}
	_putchar('\n');
}
