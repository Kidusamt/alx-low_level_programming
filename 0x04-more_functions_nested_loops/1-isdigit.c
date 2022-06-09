#include "main.h"
/**
 * _isdigit- chks number
 * Return: 1 if its a number or 0 if not
 * @c : to be cheked
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);

}
