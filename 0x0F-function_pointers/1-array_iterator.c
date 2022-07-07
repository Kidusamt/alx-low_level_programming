/**
* array_iterator - func
* @arry: arry
* @size: size of array
* @action: func pointer
*/
array_terator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (array && size && action)
{
for (i = 0; i < size; i++)
action(*(array + i));
}
}
