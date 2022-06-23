#include "main.h"
/**
 * sqrt2 - evaluate from 1 to n
 * @a: same number as n
 * @b: number that iterates from 1 to n
 * Return: 1
 */
int sqrt2(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (sqrt2(a, b + 1));
}
