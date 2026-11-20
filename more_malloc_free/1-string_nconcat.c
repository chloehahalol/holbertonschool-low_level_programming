#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * check_null - check if the string is null
 * @s: the string to check
 *
 * Return: if its null or not
 */
char *check_null(char *s)
{
	if (s == NULL)
	{
		return  ("");
	}
	return (s);
}

/**
 * check_length - check the length of the string
 * @s: string
 * @limit: limit of string length
 *
 * Return: length
 */
int check_length(char *s, int limit)
{
	int i = 0;
	while (s[i] != '\0' && i < limit)
	{
		i++;
	}
	return (i);
}

/**
 * string_nconcat - concat two strings with one string up
 * to n value
 * @s1: string one
 * @s2: string two
 * @n: up to n value
 *
 * Return: pointer to the concated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1;
	unsigned int l2;
	unsigned int i;

	char *comb;
	l1 = 0;
	l2 = 0;
	i = 0;

	s1 = check_null(s1);
	s2 = check_null(s2);

	while (s1[l1] != '\0')
	{
		l1++;
	}
	while (l2 < n && s2[l2] != '\0')
	{
		l2++;
	}
	comb = malloc(l1 + l2 + 1);
	if (comb == NULL)
	{
		return (NULL);
	}
	while (i < l1)
	{
		comb[i] = s1[i];
		i++;
	}
	while (i < l1 + l2)
	{
		comb[i] = s2[i - l1];
		i++;
	}
	comb[l1 + l2] = '\0'; /*Null terminator*/
	return (comb);
}
