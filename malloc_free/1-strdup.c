#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new space
 * @str: the string to copy
 *
 * Return: return location of the string
 */
char *_strdup(char *str)
{
	int length;
	char *copy;
	int i;

	length = 0;
	i = 0;

	if (str == NULL)
	{
		return (0);
	}

	if (str[length] == 0)
	{
		return (0);
	}

	while (str[length] != '\0')
	{
		length++;
	}

	copy = malloc(length + 1);

	while (i <= length)
	{
		copy[i] = str[i];
		i++;
	}
	return (copy);
}
