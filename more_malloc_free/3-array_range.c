#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - contain all the values from min to max
 * @min: the minimum value
 * @max: the max value
 *
 * Return: the array
 */
int *array_range(int min, int max)
{
	int length;
	int *arr;
	int i;

	i = 0;

	if (min > max)
	{
		return (NULL);
	}

	length = max - min + 1;
	arr = malloc(length * sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}

	while (i < length)
	{
		arr[i] = min + i;
		i++;
	}

	return (arr);
}
