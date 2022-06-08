#include "main.h"
/**
 * print_to_98 - Prints numbers from input to 98
 * @n: The number to start.
 *
 */
void print_to_98(int n)
{
  while (n < 99)
    {
        _putchar(n + '0');
        n++;
    }
_putchar('\n');
}
