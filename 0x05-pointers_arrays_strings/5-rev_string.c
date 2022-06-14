#include "main.h"
/**
 * rev_string - reverses a string
 * @s: char pointer
 */
void rev_string(char *s)
{
	int a, b, c, d;

	a = 0;
	while (s[a] != '\0')
	{
		a++
	}
	b = 0;
	d = a;
	a--;
	while (b < d / 2)
	{
		c = s[b];
		s[b] = s[a];
		s[a] = c;
		a--;
		b++;
	}
}
