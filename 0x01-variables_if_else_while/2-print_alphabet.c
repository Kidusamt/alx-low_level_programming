#include<stdio.h>
/**
  * Description: main - small letter print
  * Return: 0 after complition
  */
int main(void)
{
char a = 'a';
while (a <= 'z')
{
putchar(a);
	a++;
}
putchar('\n');
return (0);
}
