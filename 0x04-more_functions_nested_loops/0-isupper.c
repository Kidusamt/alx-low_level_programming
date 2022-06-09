#include "main.h"
/**
 * _isupper- chk upert or lower
 * @c: character to check
 * Return: 1 if uper
 * 0 if lower
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

}
