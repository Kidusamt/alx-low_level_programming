#include "main.h"
/**
 * swap_int - swapes to number
 * @a: 1st num
 * @b: 2nd num
 */
void swap_int(int *a, int *b)
{
	int c, d;

	c = *a;
	d = *b;
	*a = d;
	*b = c;

}
