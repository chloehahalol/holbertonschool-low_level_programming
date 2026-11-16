#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: character array
 *
 * Return: 0 if empty else pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	i = 0;

	if (size == 0)
	{
		return (0);
	}
	else
	{
		array = malloc(size);

		while (i < size)
		{
			i++;
			if (array == NULL)
			{
				return (NULL);
			}
			else
			{
				array[i] = c;
			}
		}
		return (array);
	}
}
