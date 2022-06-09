#include <stdio.h>
/**
 *Description: cause infinity loop
 * main - causes an infinite loop
 * Return: 0
 * while loop makes infinity loop due to no incrment
 * comment: out the defective code
 * \\o/\n: ne line
 */
int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

/**
 * comment out the deffective code
 *	 while (i < 10)
 *	 {
 *	putchar(i);
 *	 }
 */

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
