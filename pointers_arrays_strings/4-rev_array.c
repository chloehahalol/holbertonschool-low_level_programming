#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @a: array
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int temp;
	int i;

	i = 0;

	while (i < n / 2)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
		i++;
	}
}
