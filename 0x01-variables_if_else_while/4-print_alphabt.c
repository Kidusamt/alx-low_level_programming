#include<stdio.h>
/**
 * Description: main - small letter print wit out e and q
 *  Return: 0 after complition
 */
int main(void)
{
	char a = 'a';

	for (a = 'a'; a < 'z'; a++)
	{
		if (a == 'e')
		{
			return(1);
		}
		else if (a == 'q')
		{
			return(1);
		}
		else
		putchar(a);
		a++;
	}
putchar('\n');
return (0);
}
