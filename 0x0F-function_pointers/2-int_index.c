#include <stdio.h>
/*
 * int_index- func
 * @array: arry
 * @size: size of array
 * @cmp: fun pointer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0 || array == NULL || cmp == NULL)
				return (-1);
	int i;
	for (i=0; i<size; i++)
	{
		    if (cmp(*(array + i)))
			    			return (i);
	}
}
