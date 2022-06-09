#include "main.h"
/**
 * _isupper- chk upert or lower
 * @c: character to check
 * return 1 if uper
 * return 0 if lower
 */
int _isupper(int c);
{
	if (c <= 65 && c > 97)
		return (1);
	else
		return (0);

}
