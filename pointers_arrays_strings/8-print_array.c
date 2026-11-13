#include "main.h"
#include <stdio.h>

/**
 * print_array - prints an array of integers
 * @a: the array of integers
 * @n: the number of elements
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		i++;

		if (i != n)
		{
			printf(", ");
		}
	}
	printf("\n");
}
