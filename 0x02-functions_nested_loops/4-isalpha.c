#include "main.h"
/**
 * Discription:_isalpha-checks for alphabetic character.
 * Return: 1 if c is a letter, lowercase or uppercase or 0
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') ||(c >= 'A' && c <= 'Z'))
	return (1);
else
	return (0);
}
