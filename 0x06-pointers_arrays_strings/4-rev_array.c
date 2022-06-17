/**
 * reverse_array - reverse_array
 * @a: arry pointer.
 * @n: number of arry element
 */
void reverse_array(int *a, int n)
{
int tmp, index;

for (index = n - 1; index > n / 2; index--)
{
tmp = a[n - 1 - index];
a[n - 1 - index] = a[index];
a[index] = tmp;
}
}
