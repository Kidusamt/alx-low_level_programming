#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - multiplies 2 numbers
* @argc: argument number
* @argv: arry.
* Return: 0
*/
int main(int argc, char *argv[])
{
	int i, mul;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
		mul = atoi(argv[i] * argv[i + 1]);
	printf("%d", mul);
return (0);
}
