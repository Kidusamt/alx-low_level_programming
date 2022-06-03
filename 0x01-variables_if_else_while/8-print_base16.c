#include<stdio.h>
/**
 * Description: main - small letter print
 * Return: 0 after complition
 */
int main(void)
{
	char a = '0';
	char b = 'a';

	while (a <= '9')
{
	putchar(a);
	a++;
}
while (b <= 'f')
{
putchar(b);
b++;
}
putchar('\n');
return (0);
}
