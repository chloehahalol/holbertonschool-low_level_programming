#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: the integers to add
 * @size: the size of the array
 */
void print_diagsums(int *a, int size)
{
	int row;
	int total1;
	int total2;

	row = 0;
	total1 = 0;
	total2 = 0;

	while (row < size)
	{
		total1 = total1 + a[size * row + row];
		total2 = total2 + a[size * row + (size - 1 - row)];
		row++;
	}
	printf("%d, %d\n", total1, total2);
}
