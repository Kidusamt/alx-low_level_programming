nclude <stdio.h>
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

	printf("Size of a char: %lu.",sizeof(c)" byte");
        printf("Size of a int: %lu.",sizeof(i)" byte");
        printf("Size of a long int %lu.:",sizeof(li)" byte");
        printf("Size of a long long int %lu.:",sizeof(lli)" byte");
        printf("Size of a float %lu.:",sizeof(f)" byte");
return (0);
}
