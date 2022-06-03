#include <stdio.h>
#include <string.h>
/**
 *  * main - prints size of dif var
 *   * Return:0 if after complition
 *    */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %lu.", (unsigned long)sizeof(c), " byte %lu.n");
        printf("Size of a int: %lu.", (unsigned long)sizeof(i), " byte %lu.\n");
        printf("Size of a long int: %lu.", (unsigned long)sizeof(li), " byte %lu.\n");
        printf("Size of a long long int: %lu.", (unsigned long)sizeof(lli), " byte %lu.\n");
        printf("Size of a float: %lu.", (unsigned long)sizeof(f), " byte %lu.\n");
return (0);
}
