#include<stdio.h>
/**
 * Description: main - print 0-9
 * Return: 0 after complition
 */
int main(void)
{
int i = 0;

for (i = 0; i < 10; i++)
{
putchar(i + '0');
  if (i < 9)
  {
  putchar(',');
  }
putchar('');
}
return (0);
}
