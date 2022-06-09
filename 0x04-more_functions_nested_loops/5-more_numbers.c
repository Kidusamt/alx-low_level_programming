#include "main.h"
#include <stdio.h>
/**
 * more_numbers - print 1-14 10x
 * Return: void
 */
void more_numbers(void)
{
	int i = 0;

	while (i < 10)
	{

	int j = 0;

	while (j <= 14)
	{
		printf("%d", j);
		j++;
	}

	i++;

	_putchar('\n');
	}
	_putchar('\n');
}
