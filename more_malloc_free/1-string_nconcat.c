#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
	int l1;
	int l2;
	int i;
	int j;

	char *comb;
	l1 = 0;
	l2 = 0;
	i = 0;
	j = 0;

	/*Check if either are null*/
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	/*Calculate length of s1 and s2*/
	while (s1[l1] != '\0')
	{
		l1++;
	}
	while (l2 <  n && s2[l2] != '\0')
	{
		l2++;
	}
	/*If s2 is longer than n, then set s2 to n*/
	if (l2 > n)
	{
		l2 = n;
	}
	/*Set memory aside, +1 for null term*/
	comb = malloc(l1 + l2 + 1);
	if (comb == NULL)
	{
		return (NULL);
	}
	/*S1 first*/
	while (i < l1)
	{
		comb[i] = s1[i];
		i++;
	}
	/*S2 second*/
	while (j < l2)
	{
		comb[i] = s2[j];
		i++;
		j++;
	}
	comb[l1 + l2] = '\0'; /*Null terminator*/
	return (comb);
}
