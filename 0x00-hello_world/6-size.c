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

	printf("Size of a char:",sizeof(c)" byte\n");
        printf("Size of a int:",sizeof(i)" byte\n");
        printf("Size of a long int:",sizeof(li)" byte\n");
        printf("Size of a long long int:",sizeof(lli)" byte\n");
        printf("Size of a float:",sizeof(f)" byte\n");
return (0);
}
