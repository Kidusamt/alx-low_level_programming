#include "main.h"
/**
 * description:print_alphabet_x10- prints 10x
 */
void print_alphabet_x10(void)
{
int count = 0;
char letter;

while (count++ <= 9)
{
for (letter = 'a'; letter <= 'z'; letter++)
_putchar('\n');
}
}
