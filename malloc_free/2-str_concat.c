#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
	char *copy;
	int length1;
	int length2;
	int i;
	int j;

	length1 = 0;
	length2 = 0;
	i = 0;
	j = 0;
	
	while (s1[length1] != '\0')	
	{
		length1++;
	}
	
	while (s2[length2] != '\0')
	{
		length2++;
	}

	copy = malloc(length1+length2+2);
	
	if (copy == NULL)
	{
		return (0);
	}
	else
	{
		while (i < length1)
		{
			copy[i] = s1[i];
			i++;
		}
		while (j <= length2)
		{
			copy[i] = s2[j];
			j++;
			i++;
		}
	}
	return (copy);
}
