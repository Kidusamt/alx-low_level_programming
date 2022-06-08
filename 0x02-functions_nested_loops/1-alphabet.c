#include "main.h"
/**
 * Description: print_alphabet - print a-z
 * Return: 0 after complition
 */
void print_alphabet(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		_putchar(l);
	}
	_putchar('\n');
}
