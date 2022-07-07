#include <stdio.h>
/**
* array_iterator - func
* @array: arry
* @size: size of array
* @action: function pointer
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (array && size && action)
{
for (i = 0; i < size; i++)
action(*(array + i));
}
}
