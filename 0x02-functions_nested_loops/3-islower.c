#include "main.h"
/**
 * description: _islower-print if lower or not
 * Return: 1 if c is lower 0 of upper
 * @c: The character to be checked
 */
int _islower(int c)
{
		if (c >= 'a' && c <= 'z')
			return (1);
		else
			return (0);
}
