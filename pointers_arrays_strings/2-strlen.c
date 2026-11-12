#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: the pointer of a string
 *
 * Return: an integer
 */
int _strlen(char *s)
{
	int length;

	length = 0;

	while (*s != '\0')
	{
		s++;
		length++;
	}

	return length;
}

