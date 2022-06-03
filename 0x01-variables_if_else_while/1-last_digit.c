#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * Description: main - chk the last number
 * Return: 0 after complition
 */
int main(void)
{
	
	int n , ln;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ln = n % 10
	if (ln > 5)
	{
		printf("Last digit of %d is ", n);
		printf("%d and is greater than 5", ln);
	}
	else if 
	{
		printf("last digit of %d is ", n);
		printf("%d and is zero", ln);
	}
	else 
		printf("last digit of %d is ", n);
		printf("%d and is is less than 6 and not 0");
return (0);
}
