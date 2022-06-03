#include<stdio.h>
/**
 * Description: main - revers alpa
 * Return: 0 after test complition
 */
int main(void)
{
	char a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
putchar('\n');
return (0);
}
