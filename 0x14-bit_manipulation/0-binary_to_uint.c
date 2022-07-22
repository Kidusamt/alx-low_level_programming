#include <stdio.h>
#include <math.h>
/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: the binary number as a string
 * Return: decimal value
 */
unsigned int binary_to_uint(const char *b)
{
int check_0_1(const char *b);
unsigned int i = 0, sum = 0, j = 0;
if (!check_0_1(b))
return (0);

while (b[i])
i++;

while (i > 0)
{
sum = (sum + ((b[i - 1] - '0') * (pow(2, j))));
j++;
i--;
}
return (sum);
}
/**
 * check_0_1 - checks if a string has only 0's and 1's
 * @b: string to be checked
 * Return: 1 if string is valid, 0 otherwise
 */
int check_0_1(const char *b)
{
if (b == NULL)
return (0);

while (*b)
{
if (*b != '1' && *b != '0')
return (0);
b++;
}
return (1);
}
