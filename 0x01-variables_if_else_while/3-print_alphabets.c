#include<stdio.h>
/**
 *   * Description: main - small letter print
 *     * Return: 0 after complition
 *       */
int main(void)
{
	char a = 'a', b = 'A';
	while (a <= 'z')
	{
		putchar(a);
			a++;
	}
	while (b =< 'Z')
	{
		putchar(b);
		b++
	}
	putchar('\n');
	return (0);
}
