#include <stdio.h>
#include <string.h>
/**
 *  * main - prints size of dif var
 *   * Return:0 if after complition
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

printf("Size of a char: %zu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of an int: %zu byte(s)\n", (unsigned long)sizeof(i));
printf("Size of a long int: %zu byte(s)\n", (unsigned long)sizeof(li));
printf("Size of a long long int: %zu byte(s)\n", (unsigned long)sizeof(lli));
printf("Size of a float: %zu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
