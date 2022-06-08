#include "main.h"
/**
 * Discription: print_sign -prints - or +
 * Return: 1 + -1 0
 * @n: The number of which the sign will be printed.
 * print_sign - print the sign of a number - or +
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
	}
}
