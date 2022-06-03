#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * Description: main - chk the last number
 * Return: 0 after complition
 */
int main(void)
{
	int n, ln;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ln = n % 10;
	if (ln > 5)
	{
		printf("Last digit of %d is ", n);
		printf("%d and is greater than 5\n", ln);
	}
	else if (ln == 0)
	{
		printf("Last digit of %d is ", n);
		printf("%d and is 0\n", ln);
	}
	else
	{
		printf("Last digit of %d is ", n);
		printf("%d and is less than 6 and not 0\n", ln);
	}
return (0);
}
