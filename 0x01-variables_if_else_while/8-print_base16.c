#include<stdio.h>
/**
 * Description: main - small letter print
 * Return: 0 after complition
 */
int main(void)
{
	char a = '0';

	while (a <= 'f')
{
	putchar(a);
	a++;
}
putchar('\n');
return (0);
}
