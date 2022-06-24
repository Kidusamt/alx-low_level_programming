#include "main.h"
#include <stdio.h>
/**
* main - multiplies 2 numbers
* @argc: argument number
* @argv: arry
* Return: 0
*/
int main(int argc, char *argv[])
{
	int i, mul;

	if (argc != 2)
	{
		printf("ERROR\n");
		return (1);
	}
	else
		for (i = 1; i < argc; i++)
		{
			mul = argv[i] * argv[i + 1]
		}
return (0);
}
