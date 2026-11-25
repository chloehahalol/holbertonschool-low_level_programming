#include <stdio.h>

/**
 * int_index - check what values in an array match
 * @array: array of values to check
 * @size: size of the array
 * @cmp: function that compates
 *
 * Return: return -1 if no match or array size less than 0,
 * otherwise return position in array where there is a match.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;

	if (size <= 0 ||  array == NULL || cmp == NULL)
	{
		return (-1);
	}

	while (i < size && cmp(array[i]) == 0)
	{
		i++;
	}

	if (i >= size)
	{
		return (-1);
	}

	return (i);
}
