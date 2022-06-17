/**
 * reverse_array - reverse_array
 * @a: arry pointer
 * @n: number of arry element
 */
void reverse_array(int *a, int n)
{
	int i, j, k;

	if (n % 2 != 0)
		d = n + 1;
	else
		d = n;
	for (i = 0; i < k / 2; i++)
	{
		j = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = j;
	}
}
