#include "main.h"
/**
 * more_numbers - print 1-14 10x
 * Return: void
 */
void more_numbers(void)
{
	char i = '0', j;

	while (i < '10')
	{
		j = '0';
		while (j <= '14')
			{
				_putchar(j);
				j++;
			}
		i++;
		_putchar('\n');
	}
	_putchar('\n');
}
