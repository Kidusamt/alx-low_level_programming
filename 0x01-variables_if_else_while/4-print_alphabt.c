#include<stdio.h>
/**
 * Description: main - small letter print wit out e and q
 *  Return: 0 after complition
 */
int main(void)
{
	char a = 'a';

	for (a = 0; a < 'z'; a++)
	{
		putchar(a);
		a++;
	}
putchar('\n');
return (0);
}
