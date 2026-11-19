#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_length - calculates the length of a string
 * @s: string to measure
 *
 * Return: the length of the string
 */
int string_length(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * check_null - check if the string is null
 * @s: the string to check
 *
 * Return: the string
 */
char check_null(char *s)
{
	if (s == NULL)
	{
		s = "";
	}
	return (s);
}


/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: returns the full string concatenated
 */
char *str_concat(char *s1, char *s2)
{
	char *copy;
	int length1 = 0;
	int length2 = 0;
	int i = 0;
	int j = 0;

	s1 = check_null(s1);
	s2 = check_null(s2);

	length1 = string_length(s1);
	length2 = string_length(s2);

	copy = malloc(length1 + length2 + 1);

	if (copy == NULL)
	{
		return (0);
	}

	while (i < length1)
	{
		copy[i] = s1[i];
		i++;
	}
	while (j <= length2)
	{
		copy[length1 + j] = s2[j];
		j++;
	}

	return (copy);
}
