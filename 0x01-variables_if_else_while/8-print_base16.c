#include<stdio.h>
/**
 * Description: main - small letter print
 * Return: 0 after complition
 */
int maib(void)
{
	char a = '0'

	while (a <= 'f')
{
	putchar('%x', a);
	a++;
}
putchar('\n')
return (0);
}
